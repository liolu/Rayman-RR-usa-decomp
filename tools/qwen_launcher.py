#!/usr/bin/env python3
"""Small window to run the Qwen autopilot: pick how many functions, start, stop after the current one.

    python tools/qwen_launcher.py        (or double-click qwen_launcher.bat)

Stop = the current function is finished (match, verify, local commit), then the loop ends.
"""
import subprocess
import sys
import threading
import tkinter as tk
from pathlib import Path
from tkinter import scrolledtext

ROOT = Path(__file__).resolve().parent.parent
STOP = ROOT / "build" / "qwen_auto" / "STOP"


class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Qwen decomp autopilot")
        self.geometry("720x460")
        self.proc = None

        top = tk.Frame(self)
        top.pack(fill="x", padx=8, pady=6)
        tk.Label(top, text="Functions:").pack(side="left")
        self.count = tk.Spinbox(top, from_=1, to=500, width=5)
        self.count.delete(0, "end")
        self.count.insert(0, "10")
        self.count.pack(side="left", padx=4)
        tk.Label(top, text="Min/function:").pack(side="left", padx=(10, 0))
        self.minutes = tk.Spinbox(top, from_=1, to=60, width=4)
        self.minutes.delete(0, "end")
        self.minutes.insert(0, "5")
        self.minutes.pack(side="left", padx=4)
        tk.Label(top, text="Model:").pack(side="left", padx=(10, 0))
        self.model = tk.Entry(top, width=12)
        self.model.insert(0, "qwen9-ctx")
        self.model.pack(side="left", padx=4)

        self.start_btn = tk.Button(top, text="Start", width=8, command=self.start)
        self.start_btn.pack(side="left", padx=(14, 4))
        self.stop_btn = tk.Button(top, text="Stop after current", state="disabled", command=self.stop)
        self.stop_btn.pack(side="left")

        self.status = tk.Label(self, text="Idle", anchor="w")
        self.status.pack(fill="x", padx=8)
        self.log = scrolledtext.ScrolledText(self, state="disabled", font=("Consolas", 9))
        self.log.pack(fill="both", expand=True, padx=8, pady=6)
        self.protocol("WM_DELETE_WINDOW", self.on_close)

    def write(self, text):
        self.log.configure(state="normal")
        self.log.insert("end", text)
        self.log.see("end")
        self.log.configure(state="disabled")

    def start(self):
        try:
            n, m = int(self.count.get()), float(self.minutes.get())
        except ValueError:
            self.status.config(text="Invalid number")
            return
        STOP.parent.mkdir(parents=True, exist_ok=True)
        STOP.unlink(missing_ok=True)
        cmd = [sys.executable, "-u", "tools/qwen_auto.py", "--max", str(n), "--minutes", str(m),
               "--model", self.model.get().strip() or "qwen9-ctx"]
        self.proc = subprocess.Popen(cmd, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                     text=True, encoding="utf-8", errors="replace")
        self.start_btn.config(state="disabled")
        self.stop_btn.config(state="normal")
        self.status.config(text=f"Running: {n} functions max")
        self.write(f"> {' '.join(cmd[2:])}\n")
        threading.Thread(target=self.pump, daemon=True).start()

    def pump(self):
        for line in self.proc.stdout:
            self.after(0, self.write, line)
        code = self.proc.wait()
        self.after(0, self.finished, code)

    def finished(self, code):
        self.write(f"\n[finished, exit code {code}]\n")
        self.status.config(text="Idle")
        self.start_btn.config(state="normal")
        self.stop_btn.config(state="disabled")

    def stop(self):
        STOP.parent.mkdir(parents=True, exist_ok=True)
        STOP.write_text("stop")
        self.stop_btn.config(state="disabled")
        self.status.config(text="Stopping after the current function...")

    def on_close(self):
        if self.proc and self.proc.poll() is None:
            self.stop()
            self.write("\nClose requested: waiting for the current function to finish. Close again after 'finished'.\n")
            return
        self.destroy()


if __name__ == "__main__":
    App().mainloop()

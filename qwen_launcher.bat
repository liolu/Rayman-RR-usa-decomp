@echo off
rem Double-clic : fenetre du pilote automatique Qwen (Ollama doit tourner).
cd /d "%~dp0"
powershell -NoProfile -ExecutionPolicy Bypass -WindowStyle Hidden -Command ". '%~dp0..\..\env.ps1' | Out-Null; Start-Process pythonw -ArgumentList 'tools\qwen_launcher.py' -WorkingDirectory '%~dp0'"

@echo off
echo .
:a
taskkill /F /IM NetScreenCapture.exe
taskkill /F /IM NetClassClient8.exe
taskkill /F /IM MoniteringNC8Service
taskkill /F /IM rncHost.exe
goto a

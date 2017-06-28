@echo off
:message
cls
echo ==============================================================
echo  ┌──────────┐             ┌──────────┐
echo  │                    │             │                    │
echo  │1. 인터넷 잠금 종료 │             │2. 넷클래스 전체종료│
echo  │                    │             │                    │
echo  └──────────┘             └──────────┘
echo  ┌──────────┐             ┌──────────┐
echo  │                    │             │                    │
echo  │3. 개발자 홈페이지  │             │4, 넷클래스 실행    │
echo  │                    │             │                    │
echo  └──────────┘             └──────────┘
echo  ┌──────────┐             ┌──────────┐
echo  │                    │             │                    │
echo  │5. 프로그램 종료    │             │아무키. 재시작      │
echo  │                    │             │                    │
echo  └──────────┘             └──────────┘
echo ==============================================================
set /p in=원하시는 행동에 적힌 숫자를 입력해주세요 : 
if %in% == 1 goto a
if %in% == 2 goto b
if %in% == 3 goto author
if %in% == 4 goto start
if %in% == 5 goto end
goto message
:a
taskkill /F /IM NetClassClient8.exe
cls
@echo 인터넷 잠금 강제종료 동작중
goto b
:b
taskkill /F /IM NetScreenCapture.exe
taskkill /F /IM NetClassClient8.exe
taskkill /F /IM MoniteringNC8Service.exe
taskkill /F /IM rncHost.exe
cls
@echo NetClass 강제종료 동작중
goto a
:author
cls
explorer http://github.com/SuwonC
goto message
:start
call "C:\Program Files\NetClassClient8\NetClassClient8.exe"
pause
goto message
:end
exit

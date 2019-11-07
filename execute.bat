@echo off
PATH=%PATH%;%cd%\lib\SFML\bin
set arg1=%1
set arg2=%2
.\Game.exe %arg1% %arg2%

@echo off
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
move main.exe "..\main.exe"
cd ..
rmdir build /q /s

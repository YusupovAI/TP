@echo off
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
move Game.exe "..\Game.exe"
move test.exe "..\test.exe"
cd ..

@echo off

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64

mkdir ..\..\build
pushd ..\..\build
cl -Zi ..\handmadehero\code\win32_handmade.cpp user32.lib
popd
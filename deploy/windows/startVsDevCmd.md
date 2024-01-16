## To start the VsDevTools:
"C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\Tools\VsDevCmd.bat"


## Get SDL
C:/msys64/usr/bin/wget.exe -qO sdl2.zip https://github.com/libsdl-org/SDL/releases/download/release-2.28.5/SDL2-devel-2.28.5-VC.zip
C:\Users\narge>"C:\Program Files\7-Zip\7z.exe" x sdl2.zip

## run cmake informed by SDL2_DIR
cmake -B build -DWHISPER_BUILD_EXAMPLES=1 -DWHISPER_SDL2=1 -DSDL2_DIR=C:\Users\narge\SDL2-2.28.5\cmake

## build dat shit.
<!-- cd ./build -->
msbuild .\build\ALL_BUILD.vcxproj -t:build -p:configuration=Release -p:platform=x64


## Ok now copy the SDL2.dll file into scope
set SDL2_DIR=C:\Users\narge\SDL2-2.28.5\cmake

copy  %SDL2_DIR%\..\lib\x64\SDL2.dll build\bin\Release

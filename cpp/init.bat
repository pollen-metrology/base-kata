@echo off

mkdir build
cd build
conan install .. -s build_type=Debug --update

cmake .. -G "Visual Studio 14 Win64" -DCMAKE_BUILD_TYPE=Debug

cmake --build . --config Debug

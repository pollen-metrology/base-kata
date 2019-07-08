# Kata base project for C++
This base project will allow to build a Kata environment for C++.
It provides following files:
* init.bat      : A script to automate C++ project build for Visual Studio
* Launcher.cpp  : A simple file, which contain the `main()` function. No 'active' code is expected here.
* Library.cpp   : Where to implement 'active' Kata code
* Library.h     : Where to implement 'active' Kata code
* Tests.cpp     : Where to implement the unit tests, using Google Test API

# How to prepare environment
You need a working Python 3 install and the CMake tool to be in your PATH environment variable.

Then, install Conan which is our dependency manager.

```
python -m pip install conan
```

Run the initialization script:
```
init.bat
```

This will create a `build` folder, containing a `kata.sln` project. Open it using Visual Studio.

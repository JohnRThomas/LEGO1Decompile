# LEGO Island Decompilation

***Are you ready to le?***

This project is an in-progress decompilation of the 1997 video game LEGO Island (specifically its main module LEGO1.DLL) into C++. It's still very early in development, so don't expect anything usable yet. In other words, try the other road, or come back later.

### Goals

The goals of this project are as follows:

* Faithfully decompile LEGO1.DLL such that the compiled assembly produced is identical or near-identical to the retail binary (aiming to correct the near-identical functions later on).
* Code compiles a binary as close to the original LEGO1.DLL as possible, such that the recompiled binary is a drop-in replacement (ideally byte-level identicalness).

### Process

Decompilation is performed by hand-translating functions from x86 assembly to C++ and comparing the resulting assembly code with the original binary, adjusting it until the compiled code matches. For this to work, the code must be run through the same compiler (known to be Microsoft Visual C++ 4.2) with the same compiler options to rule out any differences that aren't in the C++ code.

### Compile Instructions

This project requires [Microsoft Visual C++ 4.2](https://winworldpc.com/product/visual-c/4x) for compilation. It may compile with other versions of Visual C++ or other compilers, but this is not guaranteed. It uses the CMake configure system for versatility and can use any build tool (VC++'s native is NMake).

```
call "C:\MSDEV\bin\vcvarsall.bat" x86
git clone https://github.com/itsmattkc/LEGO1Decompile.git
cd LEGO1Decompile
mkdir build
cd build
cmake .. -G "NMake Makefiles"
nmake
```

`"NMake Makefiles"` and `nmake` can be replaced with `"Ninja"` and `ninja` if you prefer.

The code should compile on any version of Windows from 95 onwards. Due to heavy reliance on Win32 and DirectX APIs, this code will not compile on other platforms.

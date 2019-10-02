# LEGO Island Decompilation

***Are you ready to le?***

This project is an in-progress decompilation of the 1997 video game LEGO Island (specifically its main module LEGO1.DLL) into C++.

LEGO Island was initially written in Microsoft Visual C++ in 1995-1997, but no source code of the final release has ever been released.

This is very early in development, so don't expect anything usable yet. Try the other road, or come back later.

### Goals

The goals of this project are as follows:

* Produce clean, human-readable C++ code that can be compiled with Microsoft Visual C++ 2005 (last version to support Windows 95).
* Code compiles to a drop-in (preferably bug-compatible) replacement for the retail LEGO1.DLL.
* Code is cleaned up or optimized where possible, provided the results remain identical to the original functionality.

This project is intended to be a pure, faithful decompile. Therefore, the following are NOT goals of this project, but may be done in a separate fork once this code is viable:

* Platform independence. LEGO Island is heavily integrated with DirectX and Win32 APIs. Porting away from these would require substantial modifications to the code.
* Improvements to gameplay, bug fixes, or other mods, hacks, trainers, loaders, etc. As aforementioned, this is intended as a faithful decompile, from which projects that improve or alter it can be made.
* A "perfect" decompilation. While the goal is "bug-compatibility", it is not to recreate the _exact_ source code or code that (with the original compiler) produces the exact same executable. The goal is only to provide the exact same **results**, the means are less important.

### How Decompilation Is Performed

Slowly, carefully translating the disassembly into C++ function-by-function. It's extremely laborious, but really the only way to produce a true decompilation. While many tools can "decompile" binaries into C/C++, almost all of them aim to provide a "more readable pseudocode" than anything recompilable (and ones that do aim for recompilation either only work on simple binaries or use inline assembly to fake it). When translating by hand, we can use context clues and other outside information to produce higher quality (and most importantly, compilable) C++ code, as well as document findings along the way to improve our understanding of the original binary.

### Compile Instructions

This project uses the CMake build system. MSVC+Ninja is recommended:

```
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86
git clone https://github.com/itsmattkc/LEGO1Decompile.git
cd LEGO1Decompile
mkdir build
cd build
cmake .. -G "Ninja"
nmake
```

Replace `"Ninja"` for `"NMake Makefiles"` if you don't wish to use Ninja.

Due to LEGO Island's heavy reliance on Win32 and DirectX APIs, it cannot be compiled for platforms other than Windows. It also cannot be compiled for 64-bit for the time being.

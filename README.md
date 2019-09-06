# LEGO Island Decompilation

***Are you ready to le?***

This project is an in-progress decompilation of the 1997 video game LEGO Island (specifically its main module LEGO1.DLL) into C++.

LEGO Island was initially written in Microsoft Visual C++ in 1995-1997, but no source code of the final game has ever been released.

The goals of this project are as follows:

* Produce clean, "human readable" C++ code that can be compiled with Microsoft Visual C++ 2005 (last to support Windows 95).
* Code compiles to a drop-in (preferably bug-compatible) replacement for the retail LEGO1.DLL.
* Code is cleaned up or optimized where possible, provided the results remain identical to the original functionality.

This project is intended to be a pure, faithful decompile. Therefore, the following are NOT goals of this project, but may be done in a separate fork once this code is viable:

* Platform independence. LEGO Island is heavily integrated with DirectX and Win32 APIs. Porting away from these would require substantial modifications to the code.
* Improvements to gameplay, or other mods, hacks, trainers, loaders, etc. 

This project has just begun and will not produce any usable binaries yet. Please check back later.

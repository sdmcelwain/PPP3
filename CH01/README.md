# Notes

This first example contains a c++23 feature: import std;

It has been changed to use a traditional include statement, and this practice will continue throughout the archive.  For example, a program that needs console I/O and strings would require two includes:

```c++
#include <iostream>
#include <string>
```
instead of
```c++
import std;
```

At the time of this writing, Microsoft C++ is the only compiler that can handle importing the standard c++ library, and even it requires some tweaks.  If you would like to try it out, see:

In general:

https://learn.microsoft.com/en-us/cpp/cpp/tutorial-import-stl-named-module?view=msvc-170

Specific to Visual Studio (not VS Code):

https://learn.microsoft.com/en-us/cpp/build/reference/c-cpp-prop-page?view=msvc-170#build-iso-c23-standard-library-modules

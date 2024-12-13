# Notes

The "Hello World" example in this chapter contains a c++23 feature:

```c++
import std;
```

It has been changed to use a traditional include statement.  For example, a program that needs console I/O and strings would require two includes:

```c++
#include <iostream>
#include <string>
```

At the time of this writing, Microsoft C++ is the only compiler that can handle importing the standard c++ library, and even it requires some tweaks.  If you would like to try it out, see:

In general (command line):

https://learn.microsoft.com/en-us/cpp/cpp/tutorial-import-stl-named-module?view=msvc-170

Specific to Visual Studio (not VS Code):

https://learn.microsoft.com/en-us/cpp/build/reference/c-cpp-prop-page?view=msvc-170#build-iso-c23-standard-library-modules

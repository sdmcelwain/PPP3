# Notes

This first example contains a c++20 feature: import std; which has been changed to the traditional #include <...>

This practice will continue throughout the archive.  For example I/O functions will require <iostream>, strings will require <string>, and so forth.

At the time of this writing, Microsoft C++ is the only compiler that can handle importing the standard c++ library, and even it requires some tweaks.  If you would like more info, see:

In general:  https://learn.microsoft.com/en-us/cpp/cpp/tutorial-import-stl-named-module?view=msvc-170

Specific to Visual Studio (not VS Code):  https://learn.microsoft.com/en-us/cpp/build/reference/c-cpp-prop-page?view=msvc-170#build-iso-c23-standard-library-modules

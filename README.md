# PPP3

This repo contains unofficial source code for Programming: Principles and Practice Using C++, 3rd Ed. by Bjarne Stroustrup

It is NOT AFFILIATED WITH THE AUTHOR OR PUBLISHER IN ANY WAY!

## Updates:

11 December 2024 -- Just getting started on this, and with the holidays coming it is likely there won't be a lot of action until the new year.

## Motivation:

The author/publisher have not made source code available and rarely include full code listings in the text, so this is an effort to help anyone else who may be making their way through the book.

## IMPORTANT:

On page 10 of the book, section 0.4 PPP support, the author describes his rationale for using various headers and a module--basically just to accomodate compilers that are not up to the c++20/23 standards and to supply various helper functions useful to the reader.

The source code on this site will avoid using those wherever possible.  This choice is NOT dismissive of the author's rationale, but given that c++20/23 support is universally bad at this time, there doesn't seem to be a point to those workarounds.  Furthermore, as of this writing (11 December 2024) those supplied headers contain several errors.  For example, one function ironically declared -- void simple_error(...) -- actually returns an int.

Let's use the book's hello world program as an example.  "#include \<iostream\>" has been substituted for "import std;" and it has been documented.  Any change to the book's code will be documented the first time it occurs, but the same change may not be mentioned in later files.  As we progress, we may discover we have made a bad choice, but at the beginning it seems better to use c++17 (currently the default of the popular compilers) rather than strap on 2 headers and a module.  Of course, when we get to topics that absolutely require c++20/23 we have some decisions to make.

```c++
// SDM 11 December 2024 -- see notes below
// tested on Ubuntu with gcc 13.2.0:  g++ -o 0102 0102.cpp 

// at this time only msvc supports import std;
// iostream included for std::cout support instead

//import std;
#include <iostream>

int main() {
    std::cout << "Hello, World!\n";
    return 0;
}
```

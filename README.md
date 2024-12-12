# PPP3

This repo contains UNOFFICIAL source code for "Programming: Principles and Practice Using C++", 3rd Ed. by Bjarne Stroustrup, and it is NOT affilliated with the author or publisher in any way!

The author/publisher have not made source code available and rarely include full code listings in the text.  This code is based, in whole or in part, on selected examples presented in the book; however, there is one primary difference:

>   Wherever possible, the code on this site DOES NOT utilize the custom headers/module provided by the author.  See Custom Headers / Module below for more info.

Note that file names roughly match the section of the book in which they appear.  For example, the book's "Hello World" program is in chapter 1, section 1.2 and the file here is CH01/0102.cpp.  If there is more than one listing in a section, they would have -01, -02... appended.

See comments in each file and/or chapter READMEs for specific information.

## Updates:

December 2024 -- Just getting started on this, and with the holidays coming it is likely there won't be a lot of action until the new year.

## Setup

It's beyond the scope of this document to explain setup, but here is a tip for new users:  Give Microsoft Visual Studio Code (aka VS Code or vscode) a try.  Microsoft provides excellent setup information for major platforms (Windows, Linux, Mac):

[C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)

[Using Git source control in VS Code](https://code.visualstudio.com/docs/sourcecontrol/overview)

## Custom Headers / Module

On page 10 of the book, the author describes his rationale for using various custom headers and a module--essentially, to accomodate compilers that are not compatible with the c++20/23 standards and to supply various helper functions useful to the reader.  As noted above, our goal is to not use those unless absolutely necessary.

Although the helper functions may prove useful, the simple fact remains that at the time this repo was started (12/2024), none of the major compilers fully support c++20/23.  In fact, msvc is the only one that supports "import std;" and it requires tweaks.  Therefore, the entire header-dance seems rather pointless and potentially confusing to new learners.  Rather than complicate things with those custom files, it was decided that using code that is compatible with modern compiler's default settings (usually c++17) would be best.  Also note that at this time there are errors in at least one of the custom headers (available on author's site).

The original code referring to those headers will be included for your use, but commented out.

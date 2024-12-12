# PPP3

This repo contains UNOFFICIAL source code for "Programming: Principles and Practice Using C++", 3rd Ed. by Bjarne Stroustrup, and it is NOT affilliated with the author or publisher in any way!

The author/publisher have not made source code available and generally do not include full code listings in the text.  This code is based on selected examples presented in the book; however, there is one primary difference:

>   Wherever possible, the code on this site DOES NOT utilize the custom headers/module provided by the author.  See Custom Headers / Module below for more info.

Note that file names roughly match the section of the book in which they appear.  For example, the book's "Hello World" program is in section 1.2 and the file here is 0102.cpp.  Subsections are not named.  That is, 1.2.x would still be 0102.cpp.  However, if there are multiple listings in a section, they would have -01, -02... appended.

See comments in each file and/or chapter READMEs for specific information.

## Updates:

December 2024 -- Just getting started on this, and with the holidays coming it is likely there won't be a lot of action until the new year.

## Setup

It's beyond the scope of this document to explain setup, but here is a tip for new users:  Give Microsoft Visual Studio Code a try.  Microsoft provides excellent setup information for major platforms (Windows, Linux, Mac):

[C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)

[Using Git source control in VS Code](https://code.visualstudio.com/docs/sourcecontrol/overview)

## Custom Headers / Module

On page 10 of the book, the author describes his rationale for using various custom headers and a module--essentially, to accomodate compilers that are not compatible with the c++20/23 standards and to supply various helper functions useful to the reader.  As noted above, our goal is to NOT use those unless absolutely necessary.

Although the helper functions may prove useful, the simple fact remains that at the time this repo was started (12/2024), none of the major compilers fully support c++20/23.  For example, msvc is the only one that currently supports "import std;".  Therefore, the entire header-dance seems rather pointless, cumbersome, and potentially confusing to new learners.  So, when possible, the code presented here is compatible with the default settings of modern compilers (usually c++17).  Notes will be provided where c++20/23 features are required.  (FYI, if you choose to use the author's custom headers note that at this time there are errors in at least one of them.)

The original code referring to those headers, if included in the text, will be included for your use; but it will be commented out.

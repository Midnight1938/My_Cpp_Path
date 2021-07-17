
# Table of Contents

1.  [About Libraries](#orgd5b6ffb)
    1.  [Normal Libaraies: What we build](#org58f2242)
    2.  [Static (link) Libraries: Files with C++ code](#orgd4d49ce)
    3.  [Dynamic Library: Finds Code at runtime](#orge8a629b)



<a id="orgd5b6ffb"></a>

# About Libraries


<a id="org58f2242"></a>

## Normal Libaraies: What we build

-   Preprocessed, Require Compilation (.o), link (.exe, no suffix)


<a id="orgd4d49ce"></a>

## Static (link) Libraries: Files with C++ code

-   Compiled into a binary file (static Library), which we can link to our program to create an executable with code pre compiled in it
-   Can point to Dynamic Library
-   In Different OS:
    -   Windows: \`XYZ.lib\`
    -   Unix: \`libXYZ.a\`


<a id="orge8a629b"></a>

## Dynamic Library: Finds Code at runtime

-   Contains code the program finds while running (eg, cout)
-   In Different OS:
    -   Windows: \`XYZ.dll\`
    -   Unix: \`libXYZ.so\`
        -   Mac exclusive: \`XYZ.dylib\`


#include <iostream>
#include "staticanimals/cat.h"

/*
* =using namespace ...= is never important

* Compile the Library: g++ -c out.c -o out.o
* * -c means to create an intermediary object file, rather than an executable.
* ar rcs libout.a out.o
* This creates the static library. =r= means to insert with replacement, =c= means to create a new archive, and =s= means to write an index. Refer to the man page for more
* g++ runner.cpp -o runner -L../path-to-a -l:Lib.a -I../CommonLib -I../cxxtest-4.4
*/

int main()
{
    CatLib::saySomething();
    CatLib::cat Boopy;

    Boopy.Speak();    

    return 0;
}
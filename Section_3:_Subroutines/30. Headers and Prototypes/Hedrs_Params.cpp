#include <iostream> // < > Cuz its in universal space
#include "utils.h"  // " " Cuz its in project

using namespace std;

// ! void doingStuff();  // Its in the header 'utils.h'
// ? This lets us use it 'before'
/*
? The function is called the prototype 
? and it shows what how the how the function operates.

It shows what it returns and what it excepts
* * which is nothing in both cases.

* With that information the compiler can then say
* * okay you were allowed to call that function and I trust
*/
int main()
{

    doingStuff();
    doingStuff();

    return 0;
}

void doingStuff()
{
    cout << "I did a thing" << endl;
}
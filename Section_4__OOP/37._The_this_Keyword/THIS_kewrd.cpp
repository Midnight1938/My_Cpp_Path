#include <iostream>
#include "Person.h"
using namespace std;

/*
* this->Var=Var;
? It lets us have same name variables
TODO: Does an '&' lets us look at memory location?

! When we output the 'this': 
! ! It outputs the memory location in Hex (Here: 0x7fff1b83aa10)
! ! ! Changes every Run
*/
int main()
{
    Person Human;
    Person otherHuman("Skshm", 17);
    Person anotherHuman("Ded", 120);
    /* 
    ! This outputs
    * Person's Name:  Age: -1030244384
    * Because constrctr isnt setting values for age and name
    */
    cout << Human.toString() << endl;
    cout << otherHuman.toString() << endl;
    cout << anotherHuman.toString() << endl;

    cout << "\nMaking it prettier" << endl;
    cout << otherHuman.toString() << "\n\tMem Loc: " << &otherHuman << endl;
    cout << anotherHuman.toString() << "\n\tMem Loc: " << &anotherHuman << endl;

    return 0;
}
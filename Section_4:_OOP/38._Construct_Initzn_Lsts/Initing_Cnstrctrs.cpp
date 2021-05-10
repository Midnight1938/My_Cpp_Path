#include <iostream>
#include "Person.h"
using namespace std;

/*
* Just put the vars up directly along the Class value 
* instead of withing brackets
* Works in Headers and Cpp file

? Makes Life easier

! Not a big deal
*/
int main()
{
    Person Human;
    Person otherHuman("Skshm", 17);
    Person anotherHuman("Ded", 120);

    cout << Human.toString() << endl;
    cout << otherHuman.toString() << endl;
    cout << anotherHuman.toString() << endl;

    cout << "\nMaking it prettier:" << endl;
    cout << otherHuman.toString() << "\n\tMem Loc: " << &otherHuman << endl;
    cout << anotherHuman.toString() << "\n\tMem Loc: " << &anotherHuman << endl;

    return 0;
}
#include <iostream>
#include "Person.h"

using namespace std;

/*
* We see two ways to construct and destruct objs
! Its better to have Cnstrs in Class header file
!! For the sake of simplicity
*/

int main()
{
    Person Human;
    Person otherHuman("Saksham"); // ? This calls the other
                                  // ? Constructor, (one with Params)

    Person Friend("Saksham", 17); // ?? This uses Set Method
                                  // ?? ie Via the .Cpp

    cout << Human.toString() << endl;
    cout << otherHuman.toString() << endl;
    cout << Friend.toString() << endl;

    return 0;
}
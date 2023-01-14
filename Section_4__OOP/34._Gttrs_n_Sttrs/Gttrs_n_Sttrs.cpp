#include <iostream>
#include "Prsn.h"

using namespace std;

/*
* Basically outsourcing variable and stuff 
* * Inside class aswell
*/

int main()
{

    Person Human;
    cout << "Name of Human1: \t" << Human.toString() << endl;
    Human.setName("Maxine");

    cout << "Name of Human2: \t" << Human.toString() << endl;

    cout << "\nName of Human2 with get method: \t"
         << Human.getName() << endl;

    return 0;
}
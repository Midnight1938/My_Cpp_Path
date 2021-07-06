#include <iostream>

#include "Animals.h"
#include "Cat.h" // One place with a cat

using namespace std;
using namespace altCat; // Other Place with a cat

/*
! Basically what using namespace std does
! A way of avoiding conflicts with variables with the same name
* A constant name exists in the headers too
*/

int main()
{

    Cat Tubs; //! Uses default namespace
    cout << "Using Standard namespace: \t" << flush;
    Tubs.speak();

    cats::Cat Hexa;
    cout << "Using namespace Cats: \t\t" << flush;
    Hexa.speak();

    altCat::Cat Mesha;
    cout << "Using namespace altCat: \t" << flush;
    Mesha.speak();

    cout << "Dafault Cat namespace: \t\t" << CATNAME << endl;

    cout << "Global var Cat name in Cats: \t" << cats::CATNAME << endl;
    cout << "Global var Cat name in altCats: " << altCat::CATNAME << endl;

    return 0;
}
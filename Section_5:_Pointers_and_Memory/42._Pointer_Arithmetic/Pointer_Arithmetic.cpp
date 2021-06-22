#include <iostream>

using namespace std;

/*
! Pointing off the end of the array may be dangerous
? '*' signifies a pointer

TODO: Mess around with poiners, add, subt, move around it
*/

int main()
{

    const int nStrings = 5;                                           //! Const  makes it so that it neverr changes value
    string texts[nStrings] = {"Ek", "Do", "Teen", "Chaar", "Panch"}; //* An Array

    string *pTexts = texts; //? Pointing to the array

    // ? Mesing with pointer position
    cout << *pTexts << endl;
    pTexts = pTexts + 1;
    cout << *pTexts << endl;
    pTexts += 3;
    cout << *pTexts << endl;
    pTexts -= 2;
    cout << *pTexts << "\n"
         << endl;

    string *pEnd = &texts[nStrings]; //! Identical to ptexts but used with & for clarity for machine
    pTexts = &texts[0];

    while (pTexts != pEnd)
    {
        cout << *pTexts << endl;
        pTexts++;
    }
    cout << "\n"
         << endl;

    //* Setting P back
    pTexts = &texts[0]; //? at address of array[0]
    long Elements = (long)(pEnd - pTexts); // ? Long prevents possible overflows
    cout << Elements << "\n"
         << endl;

    //* Setting P back and reverse
    pTexts = &texts[0];

    pTexts += nStrings / 2;
    cout << pTexts << endl;
    cout << *pTexts << endl;

    return 0;
}
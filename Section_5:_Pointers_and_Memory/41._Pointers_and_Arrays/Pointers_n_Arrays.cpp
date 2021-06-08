#include <iostream>

using namespace std;

/*
TODO: loop through an array using a pointer with an array element reference syntax
TODO: Loop through an array by incrememting a pointer
TODO: Loop through an array stopping by comparing pointer
* & operator gets you the address
* [] operator gets you the element
*/

int main()
{

    string texts[] = {"Ein", "Zwei", "Drei"}; //? A string aray
    int SotSos = sizeof(texts) / sizeof(string);

    string *pTexts = texts; //! A pointer

    cout << "Size of our array: " << SotSos << "\n"
         << endl;

    for (int i = 0; i < SotSos; i++)
    {
        cout << pTexts[i] << " " << flush; //? Iterate through array with pointer with i'
    }

    cout << endl;

    for (int i = 0; i < SotSos; i++, pTexts++)
    {
        cout << *pTexts << " " << flush; //? Iterate through array with pointer without 'i'

        //alternate pTexts = pTexts++; // Next data block
    }

    cout << endl;

    string *pElement = &texts[0]; //! Identical to ptexts but used with & for clarity
    string *pEnd = &texts[2];     //? Used an '&' to use the address (x0832453 things) of the element

    while (true)
    {
        cout << *pElement << ", " << flush;

        if (pElement == pEnd)
        {
            break;
        }
        pElement++;
    }

    return 0;
}
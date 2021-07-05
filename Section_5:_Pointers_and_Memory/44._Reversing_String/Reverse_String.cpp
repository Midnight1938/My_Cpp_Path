#include <iostream>

using namespace std;

/*
* Its easier to use a for loop and reverse a string
* But we use an array for funzies
*/

int main()
{
    char text[] = "Hellow";
    int nChars = sizeof(text)-1; //? (7-1)

    char *pStart = text; //? A start point
    char *pEnd = text + nChars -1; //? 0 + (7-1)

    while (pStart < pEnd)
    {
        char savePt = *pStart; //? Save original state
        *pStart = *pEnd; //? Swap the two end values
        *pEnd = savePt; //? set end to the savept

        pStart ++;
        pEnd --;
    }

    cout << text << endl;

    return 0;
}
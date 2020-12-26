#include <iostream>

using namespace std;

/*
* Array - List of values in one Variable
*/

int main()
{
    int ArrayValue[4];

    ArrayValue[0] = 12;
    ArrayValue[1] = 23;
    ArrayValue[2] = 34;
    ArrayValue[3] = 45;

    cout << "\nInt arrays: \n====================" << endl;

    cout << "Array Number 0 is " << ArrayValue[0] << endl;
    cout << "Array Number 1 is " << ArrayValue[1] << endl;
    cout << "Array Number 3 is " << ArrayValue[3] << endl;
    cout << "Array Number 2 is " << ArrayValue[2] << endl;
    cout << "\tA non Existent Array 4 is " << ArrayValue[4] << endl;

    float Nummers[4] = {56, 6.7, 78, 8.9}; // Better than the prev approach

    cout << "\nFloat arrays: \n========================" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Pre-Def at index " << i << ": " << Nummers[i] << endl;
    }

    // Some For Magic
    cout << "\nFor Magic: \n=====================" << endl;

    for (int i = 0; i < 5; i++)
    {
        double Nummers[4] = {2, 3, 4, 5};
        cout << "Pre-Def at index " << i << ": " << Nummers[i] << endl;
    }


    return 0;
}
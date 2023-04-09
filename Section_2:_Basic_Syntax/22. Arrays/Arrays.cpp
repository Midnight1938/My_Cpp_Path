#include <iostream>

using namespace std;

/*
* Array - List of values in one Variable
* Index starts from 0
* Dont overflow strings
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
    cout << "BAD Idea: " << ArrayValue[4] << endl;
    cout << "\tA non Existent Array 5 is " << ArrayValue[5] << endl;

    float Nummers[4] = {56, 6.7, 78, 8.9}; // Better than the prev approach

    cout << "\nFloat arrays: \n========================" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            cout << "\tNon-Existent pre-Def at index " << i << ": " << Nummers[i] << endl;
        }
        else
        {
            cout << "Pre-Def at index " << i << ": " << Nummers[i] << endl;
        }
    }

    // Some For Magic
    cout << "\nFor Magic: \n=====================" << endl;

    for (int i = 0; i < 5; i++)
    {
        double Nummers[4] = {2, 3, 4, 5};
        if (i == 4)
        {
            cout << "\tNon-Existent array with FOR magic at index " << i << ": " << Nummers[i] << endl;
        }
        else
        {
            cout << "Array with FOR Magic at index " << i << ": " << Nummers[i] << endl;
        }
    }

    // A String array
    string StrArrae[] = {"Apple", "Mango", "Grapes"};

    cout << "\nString Array: \n=====================" << endl;

    for (int i = 0; i < 3; i++) // It will overflow and crash if the i goes beyond
    {
        cout << "String is " << StrArrae[i] << endl;
    }

    return 0;
}
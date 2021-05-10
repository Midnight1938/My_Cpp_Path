#include <iostream>

using namespace std;

int main()
{
    string Passcode = "Hellow";
    // ! /t makes a tab key
    cout << "0. \tSpare everyone " << endl;
    cout << "1. \tthe city " << endl;
    cout << "2. \tthe State " << endl;
    cout << "3. \tthe Country " << endl;
    cout << "4. \tthe Continent " << endl;
    cout << "5. \tthe World " << endl;
    cout << "6. \tthe Solar System " << endl;

    cout << "\nMake your choice: " << flush;

    int Answr;
    cin >> Answr;

    if (Answr == 1)
    {
        cout << "Destroyed the city Sucessfully" << endl;
    }
    else if (Answr == 2)
    {
        cout << "Destroyed the State Sucessfully" << endl;
    }
    else if (Answr == 3)
    {
        cout << "Destroyed the Country Sucessfully" << endl;
    }
    else if (Answr == 4)
    {
        cout << "Destroyed the Continent Sucessfully" << endl;
    }
    else if (Answr == 5)
    {
        cout << "Destroyed the world Sucessfully" << endl;
    }
    else if (Answr == 6)
    {
        cout << "Destroyed the SolarSystem Sucessfully" << endl;
    }
    else if (Answr == 0)
    {
        cout << "Youuu sofite" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
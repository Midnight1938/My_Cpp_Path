#include <iostream>

using namespace std;

int main()
{
    string Animols[2][3] = // We can forget the first Index but not second
        {
            {"Dog", "Squirrel", "Monkey"}, // Index 0
            {"Hyena", "Lion", "Baboon"}};  // Index 1

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Animols[i][j] << " " << flush;
        }
        cout << endl; // New line "\n" type
    }

    return 0;
}

// TODO try to make a multiplication table of 10x10
/*
* 1, 2, 3, 4...
* 2, 4, 6, 8...
* 3, 6, 9, 12..
*/
#include <iostream>
using namespace std;

/*

*/

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}

int getInput()
{
    cout << "Enter Selection: " << flush;

    int Slction;
    cin >> Slction;

    return Slction;
}

void processSelection(int Option) // Used like a def
{
    switch (Option)
    {
    case 1:
        cout << "\n\nSearching Data........." << endl;
        break;
    case 2:
        cout << "\n\nViewing Records........." << endl;
        break;
    case 3:
        cout << "\n\nGoodbye " << endl;
        break;

    default:
        cout << "Please enter an item from the menu" << endl;
    }
}

int main()
{
    showMenu();

    int Selection = getInput();
    processSelection(Selection); // ? Like a Def, 
                                // ? but decentralized

    return 0;
}
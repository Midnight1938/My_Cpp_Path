#include <iostream>
using namespace std;

/*
* YES im reusing the Functions thingy

! A void was changed to int so that we are able to use it 'outside' it
*/

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}

int processSelection()
{
    cout << "Enter Selection: " << flush;

    int Slction;
    cin >> Slction;

    return Slction;
}

// * Both isolations are individual

int main()
{
    showMenu();
    // ? We are isolating and reusing the function this way

    int Slction = processSelection();
    switch (Slction)
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
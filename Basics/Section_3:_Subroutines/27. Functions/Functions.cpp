#include <iostream>
using namespace std;

/*
* We wont be returning the data into main using void
* Its a function, the 'void'

! try and keep your main simple 
! ! and have it simply illustrate whats going on
*/
void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}

void processSelection()
{
    cout << "Enter Selection: " << flush;
    int Slction;
    cin >> Slction;

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

int main()
{
    showMenu();
    processSelection();
    // ? We used the Function, like 'def'
}
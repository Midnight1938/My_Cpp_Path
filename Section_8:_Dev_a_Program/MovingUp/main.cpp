#include <iostream>
#include "SDL2/SDL.h"
#include "Screen.h"

using namespace std;
using namespace Screen_Maykr;

/*
! We can always lookup what an SDL Event does online, and view the wiki
! Every Question regarding build answered in the basic program

* Window Creation and Destruction Moved to <<=Screen.cpp=>>
? * m_prefix in the header signifies that they are instance variables, not local
* * The Height and Width are constants because they dont change 
* * Everything Related to Forming the Screen is Moved to the Screen.cpp
? * Header holds the sdl.h to help build screen
*/

int main()
{

    Screen PlayArea;

    if (PlayArea.init() == false)
    {
        cout << "Error initialising SDL." << endl;
    }

    while (true)
    {
        //* Update particles
        //* Draw particles

        //* Check for messages/events
        if (PlayArea.processEvents() == false)
        {
            break;
        }
    }

    PlayArea.close();

    return 0;
}
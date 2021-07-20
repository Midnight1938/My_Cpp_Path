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
* * Updates now exist in their own sub class, and SetPixel is now used instead of memset duplicate
? ? ? Refer to the Shifty Bits for info on SetPixel
* * * [(y * Scrn_Width) + x] sets the x,y coordinates into an index value in the buffer
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
        for (int y = 0; y < Screen::Scrn_Height; y++)
        {
            for (int x = 0; x < Screen::Scrn_Width; x++)
            {
                PlayArea.setPixel(x, y, 128, 0, 255);
            }
        }

        PlayArea.setPixel(400, 300, 255, 255, 255);

        //* Update Pixels
        PlayArea.Update();

        //* Check for messages/events
        if (PlayArea.processEvents() == false)
        {
            break;
        }
    }

    PlayArea.close();

    return 0;
}
#include <iostream>
#include "SDL2/SDL.h"
#include "math.h"
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
* We use trigonometry (sin) to make the colour dance as it goes from -1 to +1.
? ? Unsigned char has the max value of 255, which is prefect as hex values cant go above that
* * Multiplied by 0.0001 to make it a bit uniform. And using natural numbers to make it range btwn 0 and 255
TODO: Set trigs to sin, cos, tan for funny time
*/

int main()
{

    Screen PlayArea;

    if (PlayArea.init() == false)
    {
        cout << "Error initialising SDL." << endl;
    }

    int max = 0;

    while (true)
    {
        //* Update particles
        //* Draw particles

        //* Magic Colours
        int Run_Elapse = SDL_GetTicks();
        unsigned char red = (unsigned char)((1 + sin(Run_Elapse * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(Run_Elapse * 0.0003)) * 128);
        unsigned char green = (unsigned char)((1 + sin(Run_Elapse * 0.0001)) * 128);

        for (int y = 0; y < Screen::Scrn_Height; y++)
        {
            for (int x = 0; x < Screen::Scrn_Width; x++)
            {
                PlayArea.setPixel(x, y, red, green, blue);
            }
        }

        //* Update Pixels
        PlayArea.Update();

        //* Check for events
        if (PlayArea.processEvents() == false)
        {
            break;
        }
    }

    PlayArea.close();

    return 0;
}
#include <iostream>
#include <stdlib.h> // For random
#include <time.h>

#include "SDL2/SDL.h"
#include "math.h"
#include "Screen.h"
#include "particle.h"
#include "swarm.h"

using namespace std;
using namespace Screen_Maykr;

/*
! We can always lookup what an SDL Event does online, and view the wiki
! Every Question regarding build answered in the basic program
! Difference btwn a class and struct is that a struct has all vars public by default. Opposite is in Class

* Window Creation and Destruction Moved to <<=Screen.cpp=>>
? * m_prefix in the header signifies that they are instance variables, not local
* * The Height and Width are constants because they dont change 
* * Everything Related to Forming the Screen is Moved to the Screen.cpp
? * Header holds the sdl.h to help build screen

* Updates now exist in their own sub class, and SetPixel is now used instead of memset duplicate
? ? Refer to the Shifty Bits for info on SetPixel
* * [(y * Scrn_Width) + x] sets the x,y coordinates into an index value in the buffer

* We use trigonometry (sin) to make the colour dance as it goes from -1 to +1.
? ? Unsigned char has the max value of 255, which is prefect as hex values cant go above that
* * Multiplied by 0.0001 to make it a bit uniform. And using natural numbers to make it range btwn 0 and 255
TODO: Set trigs to sin, cos, tan for funny time

* The double (2.0 multip) in particles.h lets us move pixels conceptually, bit-by-bit, making stuff smoother
? * (double)rand()/RAND_MAX; returns a number btwn 0 <-> 1. (2.0 *rand()) makes it 0 <-> 2. '-1' makes it -1 <-> +1
? ? const Particle * const getParticles() { return m_pParticles; }; Const pointer to a const particle
! A check for on screen check is added to setPixels
* We update the positions of the particles by changing their coordinate values individually
* the 'return if particles outside our limit' prevents crashes
* * The 0.001 in random speed makes it not just give zeroes, and the 2.0 multip makes the range -1 <-> 1.
TODO: Why does it make a box in the bottom right?
*/

int main()
{
    srand(time(NULL));

    Screen PlayArea;

    if (PlayArea.init() == false)
    {
        cout << "Error initialising SDL." << endl;
    }

    Swarm particlSwarm;

    int max = 0;

    while (true)
    {
        //* Update particles
        PlayArea.clearScrn();
        particlSwarm.swarmUpdate();

        //* Magic Colours
        int Run_Elapse = SDL_GetTicks();
        unsigned char red = (unsigned char)((1 + sin(Run_Elapse * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(Run_Elapse * 0.0003)) * 128);
        unsigned char green = (unsigned char)((1 + sin(Run_Elapse * 0.0001)) * 128);

        //* Draw particles
        const Particle *const pParticles = particlSwarm.getParticles();
        for (int i = 0; i < Swarm::nParticles; i++)
        {
            Particle particl = pParticles[i];

            int x = (particl.m_x + 1) * Screen::Scrn_Width / 2;
            int y = (particl.m_y + 1) * Screen::Scrn_Height / 2;
            PlayArea.setPixel(x, y, red, green, blue);
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
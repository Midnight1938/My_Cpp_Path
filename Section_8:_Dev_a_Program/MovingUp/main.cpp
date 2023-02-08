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
 * Look at CodingInfo.org for info regarding the Programming Process
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

    while (true)
    {
        int Run_Elapse = SDL_GetTicks();

        //* Update particles
        // PlayArea.clearScrn(); //? To Blur particles
        particlSwarm.swarmUpdate(Run_Elapse);

        unsigned char red = (unsigned char)((1 + sin(Run_Elapse * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(Run_Elapse * 0.0003)) * 128);
        unsigned char green = (unsigned char)((1 + sin(Run_Elapse * 0.0001)) * 128);

        //* Draw particles
        const Particle *const pParticles = particlSwarm.getParticles();
        for (int i = 0; i < Swarm::nParticles; i++)
        {
            Particle particl = pParticles[i];

            int x = (particl.m_x + 1) * Screen::Scrn_Width / 2;
            int y = (particl.m_y) * Screen::Scrn_Width / 2 + (Screen::Scrn_Height / 2);
            PlayArea.setPixel(x, y, red, green, blue);
        }

        //* Blurring
        PlayArea.boxBlur();

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
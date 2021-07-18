#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

/*
* This is a basic program to check if everything works
* And then make a window
*/

int main()
{
    const int Scrn_Width = 800;
    const int Scrn_Height = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL init Fail" << endl;
        return 1;
    }

    SDL_Window *windoo = SDL_CreateWindow("Fier Egg Splojan",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, Scrn_Width, Scrn_Height, SDL_WINDOW_SHOWN);
    //? Undefined window position [(x,y),(movable types)], Screen Resolution, Just show the Window

    if (windoo == NULL)
    {
        SDL_Quit();
        cout << "Got Error:\t" << SDL_GetError() << endl;
        return 113; // Just tradiitonal, probably never see it
    }

    bool quit = false;

    SDL_Event event; //! Like a struct, thats like a class where all is public

    while (!quit) //? While not quit
    // It runs forever so takes up cpu
    {
        //* Update Particlees
        //* Draw Particles

        //* Check for user events
        while (SDL_PollEvent(&event)) //? To process all events that happen
        {
            if (event.type == SDL_QUIT)
            {                //? If we close the window
                quit = true; //! It closes the program by going out of the while loops we have, and onto SDL_Destroy and Quit
            }
        }
    }

    SDL_DestroyWindow(windoo);
    SDL_Quit(); //? Like destroying a constructor

    return 0;
}
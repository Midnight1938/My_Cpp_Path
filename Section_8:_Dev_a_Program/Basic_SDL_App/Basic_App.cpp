#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

/*
! We can always lookup what an SDL Event does online, and view the wiki
! return VAL: Just tradiitonal, probably never see it
* This is a basic program to check if everything works
* And then make a window
* Enable pixel access
*/

int main()
{
    const int Scrn_Width = 800;
    const int Scrn_Height = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL init Fail" << endl;
        return 895;
    }

    SDL_Window *windoo = SDL_CreateWindow("Fiere Egg Splojan",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, //? Undefined window position [(x,y),(movable types)]
                                          Scrn_Width, Scrn_Height, SDL_WINDOW_SHOWN);       //? Screen Resolution, Just show the Window
    if (windoo == NULL)
    {
        SDL_Quit();
        cout << "Got Error:\t" << SDL_GetError() << endl;
        return 113;
    }

    SDL_Renderer *Rendrer = SDL_CreateRenderer(windoo, -1,                 //? Render the window, Initialize the first rendering driver supporting the requested flags (-1)
                                               SDL_RENDERER_PRESENTVSYNC); //? Sync with Computer refresh rate prevents screen tearing
    if (Rendrer == NULL)
    {
        cout << "Couldnt create Renderer" << endl;
        SDL_DestroyWindow(windoo);
        SDL_Quit();
        return 554;
    }

    SDL_Texture *Textur = SDL_CreateTexture(Rendrer, SDL_PIXELFORMAT_ABGR8888,                  //? Set texture for renderer, give 1 byte to each pixel
                                            SDL_TEXTUREACCESS_STATIC, Scrn_Width, Scrn_Height); //? Create texture access that rarely changs to render in set resolution
    if (Textur == NULL)
    {
        cout << "Couldnt create Texture" << endl;
        SDL_DestroyRenderer(Rendrer);
        SDL_DestroyWindow(windoo);
        SDL_Quit();
        return 556;
    }

    Uint32 *buffer = new Uint32[Scrn_Width * Scrn_Height]; //? Like an int but definite 32 bit as it could be different on differnt systems

    memset(buffer, 0xFF, Scrn_Width * Scrn_Height * sizeof(Uint32)); //? Set all pixels to 255 value (white) in hexadecimal

    SDL_UpdateTexture(Textur, NULL, buffer, Scrn_Width * sizeof(Uint32)); //? Update texture, the whole thing, the data we update it with, Bytes per row
    SDL_RenderClear(Rendrer);                                             //? Clean the board
    SDL_RenderCopy(Rendrer, Textur, NULL, NULL);                          //? Draw the render, with texture, entire texture, for the whole render
    SDL_RenderPresent(Rendrer);                                           //? Update the Screen

    SDL_Event event; //! Like a struct, thats like a class where all is public
    bool quit = false;
    while (!quit) //? While not quit
    // It runs forever so takes up cpu
    { //* Update Particles
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

    delete[] buffer;
    SDL_DestroyRenderer(Rendrer);
    SDL_DestroyTexture(Textur);
    SDL_DestroyWindow(windoo);
    SDL_Quit(); //? Like destroying a constructor

    return 0;
}
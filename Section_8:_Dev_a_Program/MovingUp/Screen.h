// ? This is header file
// * we used the function through here

#ifndef SCREEN_H_
#define SCREEN_H_

#include "SDL2/SDL.h"

namespace Screen_Maykr
{

    class Screen
    {
    public:
        const static int Scrn_Width = 720;
        const static int Scrn_Height = 480;

    private:
        SDL_Window *m_windoo;
        SDL_Renderer *m_rendrer;
        SDL_Texture *m_textur;
        Uint32 *m_buffer;
        Uint32 *m_bufferBlur;

    public:
        Screen();
        bool init();
        void Update();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        bool processEvents();
        void boxBlur();
        void clearScrn();
        void close();
    };

}

#endif /* SCREEN_H_ */
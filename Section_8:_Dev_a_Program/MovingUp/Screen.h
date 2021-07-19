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
        const static int Scrn_Width = 800;
        const static int Scrn_Height = 600;

    private:
        SDL_Window *m_windoo;
        SDL_Renderer *m_rendrer;
        SDL_Texture *m_textur;
        Uint32 *m_buffer;

    public:
        Screen();
        bool init();
        bool processEvents();
        void close();
    };

}

#endif /* SCREEN_H_ */
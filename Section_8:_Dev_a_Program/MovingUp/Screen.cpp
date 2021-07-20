#include "Screen.h"

/*
* Refer to the basic Prog for information
*/

namespace Screen_Maykr
{
    Screen::Screen() : m_windoo(NULL), m_rendrer(NULL), m_textur(NULL), m_buffer(NULL)
    {
    }

    bool Screen::init()
    {
        if (SDL_Init(SDL_INIT_VIDEO) < 0)
        {
            return false;
        }

        m_windoo = SDL_CreateWindow("Fiere Egg Splojan",
                                    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, Scrn_Width,
                                    Scrn_Height, SDL_WINDOW_SHOWN);

        if (m_windoo == NULL)
        {
            SDL_Quit();
            return false;
        }

        m_rendrer = SDL_CreateRenderer(m_windoo, -1, SDL_RENDERER_PRESENTVSYNC);
        m_textur = SDL_CreateTexture(m_rendrer, SDL_PIXELFORMAT_RGBA8888,
                                     SDL_TEXTUREACCESS_STATIC, Scrn_Width, Scrn_Height);

        if (m_rendrer == NULL)
        {
            SDL_DestroyWindow(m_windoo);
            SDL_Quit();
            return false;
        }

        if (m_textur == NULL)
        {
            SDL_DestroyRenderer(m_rendrer);
            SDL_DestroyWindow(m_windoo);
            SDL_Quit();
            return false;
        }

        m_buffer = new Uint32[Scrn_Width * Scrn_Height];

        memset(m_buffer, 0, Scrn_Width * Scrn_Height * sizeof(Uint32));

        return true;
    }

    void Screen::clearScrn()
    {
        memset(m_buffer, 0, Scrn_Width * Scrn_Height * sizeof(Uint32));
    }

    void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue)
    {
        if (x < 0 || x >= Scrn_Width || y < 0 || y >= Scrn_Height)
        {
            return;
        }
        Uint32 colour = 0;

        colour += red;
        colour <<= 8;
        colour += green;
        colour <<= 8;
        colour += blue;
        colour <<= 8;
        colour += 0xFF;

        m_buffer[(y * Scrn_Width) + x] = colour;
    }

    void Screen::Update()
    {
        SDL_UpdateTexture(m_textur, NULL, m_buffer, Scrn_Width * sizeof(Uint32));
        SDL_RenderClear(m_rendrer);
        SDL_RenderCopy(m_rendrer, m_textur, NULL, NULL);
        SDL_RenderPresent(m_rendrer);
    }

    bool Screen::processEvents()
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                return false;
            }
        }
        return true;
    }

    void Screen::close()
    {
        delete[] m_buffer;
        SDL_DestroyRenderer(m_rendrer);
        SDL_DestroyTexture(m_textur);
        SDL_DestroyWindow(m_windoo);
        SDL_Quit();
    }
}
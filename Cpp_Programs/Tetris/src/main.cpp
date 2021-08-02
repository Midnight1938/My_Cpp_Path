#include <ncurses.h>

#include "header/game.h"

int main()
{
    int input;
    Game mainGame;

    initscr();

    start_color();
    for (int i = 1; i < 8; ++i)
        init_pair(i, 0, i);
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    halfdelay(1);

    while (true)
    {
        for (int i = 0; mainGame.level < 10 && i < 10 - mainGame.level; ++i)
        {
            input = getch();
            mainGame.trasformTetromino(input);
            mainGame.render();
        }
        mainGame.updateState();
    }

    endwin();
}

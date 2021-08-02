#include <ncurses.h>

#include "header/game.h"
#include "header/tetromino.h"

void Game::render()
{
    int colorRendrd;

    //* render main board
    tetromino.boardUpdate();
    WINDOW *gameWindoo = newwin(22, 22, 1, 2);
    start_color();
    wborder(gameWindoo, ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_S1,
            ACS_ULCORNER, ACS_URCORNER, ACS_S1, ACS_S1);
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            colorRendrd = board[i][j] + tetromino.board[i + 4][j];
            wattron(gameWindoo, COLOR_PAIR(colorRendrd));
            mvwprintw(gameWindoo, i + 1, j * 2 + 1, "  ");
            wattroff(gameWindoo, COLOR_PAIR(colorRendrd));
        }
    }
    wrefresh(gameWindoo);

    //* render score and level
    WINDOW *statsWindoo = newwin(4, 19, 1, 30);
    box(statsWindoo, 0, 0);
    mvwprintw(statsWindoo, 1, 2, "level: %d", level + 1);
    mvwprintw(statsWindoo, 2, 2, "score: %d", score);
    wrefresh(statsWindoo);

    //* render next tetro
    WINDOW *nextWindoo = newwin(7, 15, 7, 32);
    box(nextWindoo, 0, 0);
    for (int i = 1; i < 5; ++i)
    {
        for (int j = 3; j < 7; ++j)
        {
            colorRendrd = nextTetromino.board[i][j];
            wattron(nextWindoo, COLOR_PAIR(colorRendrd));
            mvwprintw(nextWindoo, i + 1, (j - 1) * 2, "  ");
            wattroff(nextWindoo, COLOR_PAIR(colorRendrd));
        }
    }
    wrefresh(nextWindoo);
}

void Game::updateState()
{
    //* collisions bottom border
    bool collide = !tetromino.moveDwn();
    //* collisions other tetros
    if (collideWithTetrominoes())
    {
        tetromino.moveUp();
        collide = true;
    }

    //* fix, update, score, spawn tetroos
    if (collide)
    {
        tetromino.boardUpdate();
        for (int i = 0; i < 20; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                if (board[i][j] == 0)
                {
                    board[i][j] = tetromino.board[i + 4][j];
                }
            }
        }
        updateScore();
        tetromino = nextTetromino;
        nextTetromino = Tetromino();
    }
}

void Game::updateScore()
{
    int rowCleared = 0;
    for (int i = 0; i < 20; ++i)
    {
        if (isRowCompleted(i))
        {
            deleteRow(i);
            rowCleared += 1;
        }
    }

    //* Nintendo scoring system
    switch (rowCleared)
    {
    case 1:
        score += 40 * (level + 1);
        break;
    case 2:
        score += 100 * (level + 1);
        break;
    case 3:
        score += 300 * (level + 1);
        break;
    case 4:
        score += 1200 * (level + 1);
        break;
    };

    //* level up
    if (completedRows % 10 > 9 && level < 9)
        level += 1;
}

bool Game::isRowCompleted(int row)
{
    for (int j = 0; j < 10; ++j)
    {
        if (board[row][j] == 0)
            return false;
    }
    completedRows += 1;
    return true;
}

void Game::deleteRow(int row)
{
    for (int i = row; i > 0; --i)
    {
        for (int j = 0; j < 10; ++j)
        {
            board[i][j] = board[i - 1][j];
        }
    }
    for (int j = 0; j < 10; ++j)
    {
        board[0][j] = 0;
    }
}

bool Game::collideWithTetrominoes()
{
    tetromino.boardUpdate();
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (board[i][j] != 0 && tetromino.board[i + 4][j] != 0)
            {
                return true;
            }
        }
    }
    return false;
}

void Game::trasformTetromino(int key)
{
    switch (key)
    {
    case KEY_UP:
        tetromino.rotate();
        if (collideWithTetrominoes())
            tetromino.rotate(true);
        break;
    case KEY_RIGHT:
        tetromino.moveRt();
        if (collideWithTetrominoes())
            tetromino.moveLt();
        break;
    case KEY_LEFT:
        tetromino.moveLt();
        if (collideWithTetrominoes())
            tetromino.moveRt();
        break;
    case KEY_DOWN:
        tetromino.moveDwn();
        if (collideWithTetrominoes())
            tetromino.moveUp();
        break;
    }
}

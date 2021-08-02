#include <random>

#include "header/tetrominoes.h"
#include "header/tetromino.h"

Tetromino::Tetromino()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> type_gen(0, 6);
    std::uniform_int_distribution<> rotation_gen(0, 3);
    type = type_gen(gen);
    rotation = rotation_gen(gen);
    boardUpdate();
}

void Tetromino::boardUpdate()
{
    //* update board with current x, y, type and rotation
    for (int i = 0; i < 20 + 4; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (i - y < 4 && i - y >= 0 &&
                j - x < 4 && j - x >= 0)
            {
                board[i][j] = tetrominoes[type][rotation][i - y][j - x];
            }
            else
            {
                board[i][j] = 0;
            }
        }
    }
}

bool Tetromino::collideBorder()
{
    boardUpdate();
    int blocc = 0;
    for (int i = 0; i < 20 + 4; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (board[i][j] != 0)
                blocc += 1;
        }
    }
    if (blocc < 4)
        return true;
    return false;
}

bool Tetromino::moveRt()
{
    x += 1;
    if (collideBorder())
    {
        x -= 1;
        return false;
    }
    return true;
}

bool Tetromino::moveLt()
{
    x -= 1;
    if (collideBorder())
    {
        x += 1;
        return false;
    }
    return true;
}

bool Tetromino::moveDwn()
{
    y += 1;
    if (collideBorder())
    {
        y -= 1;
        return false;
    }
    return true;
}

bool Tetromino::moveUp()
{
    y -= 1;
    if (collideBorder())
    {
        y += 1;
        return false;
    }
    return true;
}

bool Tetromino::rotate(bool reverse)
{
    if (reverse)
        rotation += 2;
    rotation = (rotation + 1) % 4;
    if (collideBorder())
    {
        rotation = (rotation + 3) % 4;
        return false;
    }
    return true;
}

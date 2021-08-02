#ifndef TETROMINO_H
#define TETROMINO_H

class Tetromino
{

private:
    int y = 1;
    int x = 3;
    int rotation;
    int type;
    bool collideBorder();

public:
    Tetromino();
    void boardUpdate();
    bool moveRt();
    bool moveLt();
    bool moveDwn();
    bool moveUp();
    bool rotate(bool = false);
    int board[24][10] = {};
};

#endif

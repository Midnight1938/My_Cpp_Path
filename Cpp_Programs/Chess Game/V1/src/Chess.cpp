#include <time.h>
#include <SFML/Graphics.hpp>

using namespace sf;

std::string position="";
int size = 56;
Vector2f offset(28,28);

Sprite f[32]; //? Chess Figures

int board[8][8] = {
    -1, -2, -3, -4, -5, -3, -2, -1,
    -6, -6, -6, -6, -6, -6, -6, -6,
     0,  0,  0,  0,  0,  0,  0,  0, //? Board Area
     0,  0,  0,  0,  0,  0,  0,  0, //? Board Area
     0,  0,  0,  0,  0,  0,  0,  0, //? Board Area
     0,  0,  0,  0,  0,  0,  0,  0, //? Board Area 
     6,  6,  6,  6,  6,  6,  6,  6,
     1,  2,  3,  4,  5,  3,  2,  1,};

std::string toChess(Vector2f p)
{
    std::string s="";
    s+= char(p.x/size+97);
    s+= char(7-p.y/size+49);
    return s;
}

Vector2f toCoord(char a, char b)
{
    int x = int(a)-97;
    int y = 7-int(b)+49;
    return Vector2f(x*size, y*size);
}

void Mover(std::string str){
    Vector2f oldPos = toCoord(str[0], str[1]);
    Vector2f newPos = toCoord(str[2], str[3]);

    for (int i = 0; i < 32; i++)
    {
        if (f[i].getPosition()==newPos){f[i].setPosition(-100,-100);}
    }
    for(int i=0;i<32;i++)
    {
        if (f[i].getPosition()==oldPos) {f[i].setPosition(newPos);}
    }
    
}

void loadPos()
{
    int a = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            int n = board[i][j];
            if (!n)
            {
                continue;
            }

            int x = abs(n) - 1;
            int y = n > 0 ? 1 : 0;

            f[a].setTextureRect(IntRect(size * x, size * y, size, size));
            f[a].setPosition(size * j, size * i);
            a++;
        }
    }
    for(int i=0;i<position.length();i+=5)
    {Mover(position.substr(i,4));}
}

int main()
{
    RenderWindow window(VideoMode(500, 500), "Chess Game!", Style::Close);

    //* Load Sprites
    Texture Tx1, Tx2;
    Tx1.loadFromFile("images/figures.png");
    Tx2.loadFromFile("images/board.png");

    Sprite s(Tx1);
    Sprite sBoard(Tx2);
    //*-- Load Sprites
    
    //* Load Board Area
    for (int i = 0; i < 32; i++) {f[i].setTexture(Tx1);}
    loadPos();
    //*-- Load Board Area
    

    bool isMove = false;
    float dx = 0, dy = 0;
    Vector2f oldPos, newPos;
    std::string strng;
    int n=0;

    while (window.isOpen())
    {
        Vector2i Pos = Mouse::getPosition(window);

        Event Evnt;
        while (window.pollEvent(Evnt))
        {
            if (Evnt.type == Event::Closed)
            {
                window.close();
            }

            //** Revert Move **//
            if (Evnt.type == Event::KeyPressed){
                if (Evnt.key.code == Keyboard::Z){
                    position.erase(position.length()-6,5);
                    loadPos();
                }
            }
            //*-- Revert Move

            //** Dragilibty **//
            if (Evnt.type == Event::MouseButtonPressed)
            {
                if (Evnt.key.code == Mouse::Left)
                {
                    for(int i=0; i<32;i++)
                    {
                        if (f[i].getGlobalBounds().contains(Pos.x, Pos.y))
                        {
                            isMove = true; n=i;
                            dx = Pos.x - f[i].getPosition().x;
                            dy = Pos.y - f[i].getPosition().y;
                            oldPos = f[i].getPosition();
                        }
                    }
                }
            }
            if (Evnt.type == Event::MouseButtonReleased)
            {
                if (Evnt.key.code == Mouse::Left)
                {
                    isMove = false;
                    Vector2f p = f[n].getPosition()+Vector2f(size/2,size/2);
                    Vector2f newPos = Vector2f(size*int(p.x/size), size*int(p.y/size));
                    strng = toChess(oldPos)+toChess(newPos);
                    Mover(strng); position += strng+" ";
                    f[n].setPosition(newPos);
                }
            }

            if (isMove) {f[n].setPosition(Pos.x - dx, Pos.y - dy);}
            //*-- Dragibility
        }

        //** Draw the Window **//
        window.clear();
        window.draw(sBoard);
        for (int i = 0; i < 32; i++) {window.draw(f[i]);}
        window.display();
        //*-- Draw the Window
    }

    return 0;
}
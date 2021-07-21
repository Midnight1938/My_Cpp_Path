#include <iostream>

using namespace std;

/*
? A Simple FizzBuzz program
*/

constexpr int Total = 100;

int main()
{
    for (int i = 1; i <= Total; i++)
    {
        if (i % 15 == 0)
        {
            cout << "FizzBuzz, ";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz, ";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz, ";
        }
        else
        {
            cout << i << ", ";
        }
    }

    return 0;
}
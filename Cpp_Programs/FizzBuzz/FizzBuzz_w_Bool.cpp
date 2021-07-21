#include <iostream>

using namespace std;

/*
? FIZZBUZZ with Boolean
*/

int main()
{
    for (int i = 0; i <= 100; ++i)
    {
        bool Fizz = (i % 3) == 0;
        bool Buzz = (i % 5) == 0;
        bool FBuzz = (i % 15) == 0;

        if (FBuzz)
        {
            cout << "FizzBuzz, ";
        }

        else if (Fizz)
        {
            cout << "Fizz, ";
        }
        else if (Buzz)
        {
            cout << "Buzz, ";
        }
        else if (!Fizz && !Buzz && !FBuzz)
        {
            cout << i << ", ";
        }
    }

    return 0;
}
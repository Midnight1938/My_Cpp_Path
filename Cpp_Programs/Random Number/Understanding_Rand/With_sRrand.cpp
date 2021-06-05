#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>

#include "Header-4-Linking.h"

using namespace std;

void With_sRand::sRand_Magic()
{
    list<int> Unique_Nums;
    srand(time(0));

    for (int i = 1; i <= 5; i++)
    {
        cout << (rand() % 5) + 1 << flush; //? using rand to generate a number 0 to 5
    }
}
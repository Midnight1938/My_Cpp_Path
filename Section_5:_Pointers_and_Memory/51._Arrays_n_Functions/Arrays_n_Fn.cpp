#include <iostream>
using namespace std;

/*
? Could declare variables here:
? ? string numbers[] = {"one", "two", "three"};
* SIZE 1:: nElements asks for number of arrays up front
* SIZE 2:: Pointer version just replaces the string and '[]', but pointer doesnt have size info
* SIZE 3:: If we want to retain size info we have to use reference and define array numbers too
*/
void show1(const int nElements, string texts[])
{

    //* cout << sizeof(texts) << endl; returns sizeof pointer!

    cout << "\nSHOW 1:" << endl;
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts)
{

    cout << "\nSHOW 2:" << endl;
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3])
{

    cout << "\nSHOW 3:" << endl;
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        cout << texts[i] << endl;
    }
}

//! Returning array from a function

char *getMemory()
{
    char *pMem = new char[100];

    return pMem;
}

void freeMemory(char *pMem) //? Cleanup the mess getMemory made
{
    delete[] pMem;
}

int main()
{

    string texts[] = {"Minute", "Maid", "Utsav"};

    cout << "Size of Array:\t" << sizeof(texts) << endl;

    show1(3, texts); // With nElements defined
    show2(3, texts); // With pointer
    show3(texts);    // With Reference

    //? Fn Allocating and DeAllocating Memory
    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}
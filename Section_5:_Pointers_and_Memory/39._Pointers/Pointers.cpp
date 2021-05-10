#include <iostream>

using namespace std;

/*
* int* means int pointer
? We prefixed with 'p' but we dont have to 
? In a normal run, dValue and pValue are 2 different variables and would output:
    1. dValue: 123.4
    2. Val of double in manipulate: 123.4
    3. Val of double in manipulate: 10
    4. dValue: 123.4
? But by using pointers we are able to use the same memory address
*/

void manipulate(double *pvalue) //turned into a pointer
{
    cout << "2. Val of double in manipulate: " << *pvalue << endl;
    *pvalue = 10.0;
    cout << "3. Val of double in manipulate: " << *pvalue << endl;
}

int main()
{
    int nValue = 8; // ? Its a bucket where we put a value,
                    // ? allocating some memory to the value, and the size is governed by 'int'

    int *pnValue = &nValue; //Pointer to an int = address of nValue

    cout << "The int value: " << nValue << endl;
    cout << "Pointer to int value (in hex): " << pnValue << endl;

    cout << "\nInt value Via Pointer: " << *pnValue << endl; //Value that the pointer refers to

    cout << "=========================" << endl;

    double dValue=123.4;
    cout << "\n1. dValue: " << dValue << endl;
    manipulate(&dValue); //Sending the address
    cout << "4. dValue: " << dValue << endl;
    
    return 0;
}
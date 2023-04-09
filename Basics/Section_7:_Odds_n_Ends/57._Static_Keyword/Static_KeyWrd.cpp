#include <iostream>

using namespace std;

/*
* Static methods can be accessed via class 
* and can only access static variables
TODO: Define and output a puplic static field
TODO: Define and output a non-static field
TODO: Output a static field with a static method
TODO: Try incrementing static int field with postfix and prefix increment operators
TODO:: (eg: count++ and ++count)
TODO: Assign OBJ id based on static count incremented in constructor
*/

//* .h header file
class Test
{
public:
    //! Initialisation of const must be done right here in public!
    static int const MAX = 99; //* Traditional to declare as capital

private:
    int id;
    static int count;

public:
    Test() { id = ++count; }

    int getId() { return id; }

    static void showInfo() { cout << count << endl; }
};

//* .cpp source

int Test::count = 0; //Set count to Zero

int main()
{

    cout << "Static Max val:\t" << Test::MAX << endl;

    Test tst1;
    cout << "Object 1 ID: " << tst1.getId() << endl;

    Test tst2;
    cout << "Object 2 ID: " << tst2.getId() << endl;
    ;

    cout << "Amount of OBJs we have: " << flush; //? Amount of OBJs
    Test::showInfo();

    return 0;
}
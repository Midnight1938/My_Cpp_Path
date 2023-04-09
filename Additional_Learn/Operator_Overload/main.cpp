#include <iostream>
using namespace std;

/*
? Name: Operator Overload
? date: 08/04/2023
? Author: @midnight1938

! Source: https://learn.microsoft.com/en-us/cpp/cpp/operator-overloading
*/

struct Complex
{
    Complex(double r, double i) : re(r), im(i) {}
    Complex operator+(Complex &other);
    void Display() { cout << re << ", " << im << endl; }
    // Unary operator non member function
    friend Complex operator-(Complex &other);

private:
    double re, im;
};

// Operator overloaded using a member function
Complex Complex::operator+(Complex &other)
{
    return Complex(re + other.re, im + other.im);
}

int main()
{
    Complex a = Complex(1.2, 3.4);
    Complex b = Complex(5.6, 7.8);
    Complex c = Complex(0.0, 0.0);
    Complex d = Complex(0.0, 0.0);
    c = a + b;
    d = -a;

    c.Display();
    d.Display();

    return 0;
}
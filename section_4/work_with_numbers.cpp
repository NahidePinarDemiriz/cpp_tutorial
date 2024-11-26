#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    cout << wnum << endl;

    wnum *= 2;
    cout << wnum << endl;

    cout << 35 + 7 << endl;     // Addition operator
    cout << 35 - 7 << endl;     // Subtraction operator
    cout << 35 * 7 << endl;     // Multiplication operator
    cout << 35 / 7 << endl;     // Division operator
    cout << 35 % 6 << endl;     // Modulus operator
    cout << 4 + 5 * 10 << endl; // Addition and multiplication operators (precedence: multiplication > addition)
    cout << (4 + 5) * 10 << endl; // Parentheses change precedence (precedence: parentheses > multiplication)

    cout << pow(2, 5) << endl; // pow(base, exponent)
    cout << sqrt(36) << endl; // Calculates the square root of 36
    cout << round(4.2) << endl; // The round() function rounds a number to the nearest integer
    cout << ceil(4.2) << endl; // The ceil() function rounds a number up to the nearest integer
    cout << floor(4.2) << endl; // The floor() function rounds a number down to the nearest integer
    cout << fmax(3, 10) << endl; // The fmax() function returns the greater of two values
    cout << fmin(3, 10) << endl; // The fmin() function returns the smaller of two values

    return 0;
}
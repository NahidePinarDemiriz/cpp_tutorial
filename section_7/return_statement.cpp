#include <iostream>
#include <cmath>

using namespace std;

// Function declaration: The function takes a number as input and returns its cube
double cube(double num);

int main()
{
    // Call the cube function with the argument 5.0 and store the result in the variable 'answer'
    double answer = cube(5.0);
    cout << answer;

    return 0; 
}

// Function definition: Calculates the cube of the given number
double cube(double num) {
    double result = num * num * num; // Multiply the number by itself three times to calculate the cube

    return result; // Return the result to the calling function
}

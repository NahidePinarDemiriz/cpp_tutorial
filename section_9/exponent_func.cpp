#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the power of a number
int power(int baseNum, int powNum) {
    int result = 1; // Initialize result as 1 (the multiplicative identity)

    // Loop to multiply baseNum 'powNum' times
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum; // Multiply result by baseNum at each step
    }

    return result; // Return the final result after exponentiation
}

int main()
{
    // Call the power function with 2 as base and 3 as exponent, and print the result
    cout << power(2, 3); // 2^3 = 8

    return 0; 
}

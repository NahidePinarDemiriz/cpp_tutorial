#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2; // Variables to store the two numbers
    char op;        // Variable to store the operator

    // Prompt the user to enter the first number
    cout << "Please enter num1: ";
    cin >> num1;

    // Prompt the user to enter the operator (+, -, *, /)
    cout << "Please enter operator: ";
    cin >> op;

    // Prompt the user to enter the second number
    cout << "Please enter num2: ";
    cin >> num2;

    int result; // Variable to store the calculation result

    // Conditional statements to perform the operation based on the operator
    if(op == '+'){ 
        result = num1 + num2; // Addition
    } else if(op == '-'){
        result = num1 - num2; // Subtraction
    } else if(op == '*'){
        result = num1 * num2; // Multiplication
    } else if(op == '/'){
        result = num1 / num2; // Division
    } else {
        // If the operator is invalid, display an error message
        cout << "Invalid operator";
        return 0; // Exit the program early
    }

    // Display the result of the operation
    cout << "Answer is: " << result << endl;

    return 0; // Indicate successful program termination
}

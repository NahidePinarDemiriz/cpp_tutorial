#include <iostream>
using namespace std;

// Function to determine the largest of three numbers
int getMax(int num1, int num2, int num3) {

    int result; // Variable to store the result

    // Check if num1 is greater than or equal to both num2 and num3
    if(num1 >= num2 && num1 >= num3) {
        result = num1; // If true, num1 is the largest
    } 
    // Check if num2 is greater than or equal to both num1 and num3
    else if(num2 >= num1 && num2 >= num3){
        result = num2; // If true, num2 is the largest
    } 
    // If both above conditions are false, num3 must be the largest
    else {
        result = num3; // num3 is the largest
    }

    return result; // Return the largest number
}

int main() {
    int num1, num2, num3; // Declare three variables to store the user input

    // Prompt the user for input for num1, num2, and num3
    cout << "Enter a number for num1: ";
    cin >> num1;
    cout << "Enter a number for num2: ";
    cin >> num2;
    cout << "Enter a number for num3: ";
    cin >> num3;

    // Call the getMax function and output the largest number
    cout << "The largest number is: " << getMax(num1, num2, num3) << endl;

    return 0; 
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // The type of a pointer must match the type of the variable it points to.

    string food = "Pizza";   // String variable
    string* ptr = &food;     // Define the pointer and assign the memory address of food to it

    cout << "Memory address of food: " << ptr << endl;  // Print the memory address stored in the pointer
    /* Dereference
    *ptr dereferences the pointer, meaning it accesses 
    the value at the memory address stored in ptr 
    */ 
    cout << "Value of food: " << *ptr << endl; // Print the value pointed to by the pointer

    /* 
    You can also change the pointer's value. 
    But note that this will also change the value of the original variable
    */ 

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
    return 0;
}
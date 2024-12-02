#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare and initialize an array with 5 integer values
    int nums[] = {1, 7, 5, 3, 2}; 

    // Loop through the array to print each number
    for(int i = 0; i < 5; i++) { // Initialization, Condition, Increment
        cout << nums[i] << endl; // Print the element at index 'i' of the array
    }

    return 0;
}

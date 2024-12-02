#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare a 2D array with 3 rows and 2 columns
    int numberGrid[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                    };
    
    // Outer loop: iterates through rows (i = 0, 1, 2)
    for(int i = 0; i < 3; i++){
        // Inner loop: iterates through columns (j = 0, 1)
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j]; // Print each element of the 2D array
        }
        cout << endl; // Print a new line after each row is printed
    }

    return 0; // End the program successfully
}
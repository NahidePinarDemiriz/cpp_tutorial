#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int index = 6;

    // While loop: The condition is checked before the code inside the loop is executed.
    // In this case, the condition (index <= 5) is false, so the loop body is never executed.
    while(index <= 5) {
        cout << index << endl; // This line will not run because the condition is false.
        index++;
    }

    int index2 = 6;

    // Do-while loop: The code inside the loop is executed at least once before checking the condition.
    // Even though the condition (index2 <= 5) is false, the body of the loop is executed once.
    do {
        cout << index2 << endl; // This line will execute once regardless of the condition.
        index2++;
    } while(index2 <= 5); // After the first iteration, the condition is checked.

    return 0;
}
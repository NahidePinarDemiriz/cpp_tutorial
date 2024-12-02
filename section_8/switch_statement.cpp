#include <iostream>
#include <cmath>

using namespace std;

// Function to return the name of the day based on the day number
string getDayOfWeek(int dayNum){
    string dayName;

    // Switch statement: Used to check the value of 'dayNum' and execute the corresponding case.
    switch(dayNum){
    case 0: // If dayNum is 0, assign "Sunday" to dayName
        dayName = "Sunday";
        break; // Exit the switch block after executing this case
    case 1: // If dayNum is 1, assign "Monday" to dayName
        dayName = "Monday";
        break;
    case 2: // If dayNum is 2, assign "Tuesday" to dayName
        dayName = "Tuesday";
        break;
    case 3: // If dayNum is 3, assign "Wednesday" to dayName
        dayName = "Wednesday";
        break;
    case 4: // If dayNum is 4, assign "Thursday" to dayName
        dayName = "Thursday";
        break;
    case 5: // If dayNum is 5, assign "Friday" to dayName
        dayName = "Friday";
        break;
    case 6: // If dayNum is 6, assign "Saturday" to dayName
        dayName = "Saturday";
        break;
    default: // If dayNum does not match any case, assign "Invalid day number" to dayName
        dayName = "Invalid day number";
    }

    return dayName;
}

int main()
{
    // Output the day name for the given day number (0 in this case)
    cout << getDayOfWeek(0); // Expected output: "Sunday"
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
    // A Fahrenheit value is received from the user
    cout << "Please enter a value in Fahrenheit: ";
    float fahrenheit;
    cin >> fahrenheit;
    // Convert to Celsius
    float celsius = toCelsius(fahrenheit);
    // Print the result
    cout << "The equivalent Celsius value is: " << celsius << "°C" << endl;

    return 0;
}
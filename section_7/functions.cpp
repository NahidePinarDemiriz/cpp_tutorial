#include <iostream>
#include <cmath>

using namespace std;

// Function declaration
void myFunction(string fname, int age); 

int main() {
  myFunction("Liam", 12); // call the function
  myFunction("Jenny", 15); // call the function
  myFunction("Anja", 18); // call the function
  return 0;
}

// Function definition
void myFunction(string fname, int age) {
  cout << fname << " Refsnes ";
  cout << "is " << age << " years old.\n";
}
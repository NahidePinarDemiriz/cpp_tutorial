#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // This is useful for taking input that contains multiple words

    cout << "Hello " << name << endl; 

    int age;
    cout << "Enter your age: " << endl; 
    cin >> age;
    cout << "You are " << age << " years old." << endl; 

    return 0;
}
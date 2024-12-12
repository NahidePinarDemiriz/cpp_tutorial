#include <iostream>
#include <cmath>

using namespace std;

// Define a class called "Student"
class Student {
    public:
        // Member variables to store the student's name, major, and GPA
        string name;
        string major;
        double gpa;

        // Constructor to initialize a Student object with name, major, and GPA
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        } 

        // Member function to check if the student has honors
        bool hasHonors() {
            // A GPA of 3.5 or higher qualifies for honors
            if (gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main() {
    // Create two Student objects with specific attributes
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    // Check if student1 has honors and print the result (0 for false, 1 for true)
    cout << student1.hasHonors();

    return 0;
}

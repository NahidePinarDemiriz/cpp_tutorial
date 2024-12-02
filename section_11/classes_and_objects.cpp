#include <iostream>
#include <cmath>

using namespace std;

// A class serves as a "blueprint" for creating objects
// It defines attributes (variables) and methods (functions)

class Book {
    public:
        string title;  // Attribute to store the title of the book
        string author; // Attribute to store the author of the book
        int pages;     // Attribute to store the number of pages
};

int main() {
    // Creating an object (book1) of the Book class
    Book book1;
    book1.title = "Harry Potter";   // Assigning values to the attributes
    book1.author = "JK Rowling";
    book1.pages = 500;

    // Creating another object (book2) of the Book class
    Book book2;
    book2.title = "The Hobbit";    // Assigning values to the attributes
    book2.author = "J.R.R. Tolkien";
    book2.pages = 310;

    // Output the title of the first book
    cout << book1.title << endl;
    // Output the title of the first book2
    cout << book2.title;

    return 0;
}

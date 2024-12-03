#include <iostream>
#include <cmath>

using namespace std;

class Book {
    public:
        string title;  // Attribute to store the book's title
        string author; // Attribute to store the book's author
        int pages;     // Attribute to store the number of pages

        // Constructor declaration (inside the class)
        Book(string aTitle, string aAuthor, int aPages); 
};

// Constructor definition outside the class
Book::Book(string aTitle, string aAuthor, int aPages) {
    title = aTitle;
    author = aAuthor;
    pages = aPages;
}

int main() {
    // Creating objects using the constructor
    Book book1("Harry Potter", "JK Rowling", 500); // First book object
    Book book2("The Hobbit", "J.R.R. Tolkien", 310); // Second book object

    // Output the title of the first book
    cout << book1.title;

    return 0;
}

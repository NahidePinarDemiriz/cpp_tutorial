#include <iostream>
#include <cmath>

using namespace std;

class Movie {
    private:
        string rating; 
        // The 'rating' is a private member variable.
        // It cannot be directly accessed from outside the class, ensuring encapsulation.

    public:
        string title;
        string director;

        // Constructor to initialize the Movie object with title, director, and rating.
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;         // Initializes the title of the movie.
            director = aDirector;   // Initializes the director of the movie.
            setRating(aRating);     // Calls the setter to initialize the rating safely.
        }

        void setRating(string aRating) {
            // The setter ensures that only valid ratings are assigned to the 'rating' variable.
            // Valid ratings are: "G", "PG", "PG-13", "R", and "NR".
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;  // Assigns the valid rating to the private 'rating' variable.
            } else {
                rating = "NR";     // Assigns "NR" (Not Rated) if the rating is invalid.
            }
        }

        string getRating() {
            // The getter allows controlled access to the private 'rating' variable.
            // It returns the current value of 'rating' to the caller.
            return rating;
        }
};

int main() {
    // Creates a 'Movie' object with the title, director, and rating.
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // Calls the getter method to retrieve the movie's rating and prints it.
    cout << avengers.getRating();

    return 0;
}

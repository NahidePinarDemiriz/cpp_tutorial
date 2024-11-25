#include <iostream> 
using namespace std; 

int main()
{
    string phrase = "Marmara University"; 
    phrase[0] = 'P'; // Changes the first character of 'phrase' to 'P'

    string phrasesub; 
    phrasesub = phrase.substr(8, 3); // Extracts 3 characters starting from index 8 ("Uni")

    cout << phrase.find("University", 0) << endl; // Finds the position of "University" starting from index 0 (returns 8)
    cout << phrasesub; // Outputs the extracted substring ("Uni")

    return 0; 
}

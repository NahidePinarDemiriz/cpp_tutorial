#include <iostream>
#include <cmath>

using namespace std;

// Superclass (Base Class)
class Chef {
    public:
        // Method to make chicken
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }

        // Method to make salad
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }

        // Method to make a special dish
        // This can be overridden by subclasses
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

// Subclass (Derived Class) inheriting from Chef
class ItalianChef : public Chef {
    public:
        // Method specific to ItalianChef
        void makePasta() {
            cout << "The chef makes pasta" << endl;
        }

        // Overriding the makeSpecialDish() method from the superclass
        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    // Creating an object of the superclass (Chef)
    Chef chef;
    chef.makeSpecialDish(); // Calls the superclass method: "The chef makes bbq ribs"

    // Creating an object of the subclass (ItalianChef)
    ItalianChef italianChef;
    italianChef.makeSpecialDish(); // Calls the overridden method: "The chef makes chicken parm"

    return 0;
}
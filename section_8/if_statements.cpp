#include <iostream>
using namespace std;

int main() {
    bool isWeekend;
    bool isVip;

    // Take input from the user
    cout << "Are you a VIP member? (1 for Yes, 0 for No): ";
    cin >> isVip;

    // If the user is a VIP, they don't need to pay
    if (isVip) {
        cout << "You will not pay parking fees." << endl;
    } else {
        // If the user is not a VIP, check if it's a weekend
        cout << "Is it a weekend? (1 for Yes, 0 for No): ";
        cin >> isWeekend;

        if (isWeekend) {
            cout << "Your parking fee is $50." << endl;
        } else {
            cout << "Your parking fee is $30." << endl;
        }
    }

    return 0;
}

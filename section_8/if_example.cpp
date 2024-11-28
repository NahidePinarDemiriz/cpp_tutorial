#include <iostream>
using namespace std;

int getMax(int num1, int num2, int num3){

    int result;

    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main() {
    int num1, num2, num3;

    cout << "Enter a number for num1: ";
    cin >> num1;
    cout << "Enter a number for num2: ";
    cin >> num2;
    cout << "Enter a number for num3: ";
    cin >> num3;

    cout << "The largest number is: " << getMax(num1, num2, num3) << endl;

    return 0;
}

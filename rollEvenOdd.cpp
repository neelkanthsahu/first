#include <iostream>
using namespace std;

int main() {
    int rollNo;

    cout << "Enter your roll number: ";
    cin >> rollNo;

    if (rollNo < 0) {
        cout << "Invalid roll number. Please enter a non-negative integer.";
        return 1;
    }

    if (rollNo % 2 == 0) {
        cout << "Your roll number is even.";
    } else {
        cout << "Your roll number is odd.";
    }

    return 0;
}
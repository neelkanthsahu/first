#include <iostream>
using namespace std;
int main() {
    int rollNo;

    cout << "Enter your three-digit roll number: ";
    cin >> rollNo;

    int bags = rollNo / 100;      // Most left digit
    int books = (rollNo / 10) % 10;  // Middle digit
    int pens = rollNo % 10;       // Most right digit

    // Print items
    cout << "I have " << bags << " bags.\n";
    cout << "I have " << books << " books.\n";
    cout << "I have " << pens << " pens.\n";

    int max = (bags > books) ? bags : books;
    max = (max > pens) ? max : pens;

    if (max == bags) {
        cout << "You have the most bags (" << bags << ").";
    } else if (max == books) {
        cout << "You have the most books (" << books << ").";
    } else {
        cout << "You have the most pens (" << pens << ").";
    }

    return 0;
}

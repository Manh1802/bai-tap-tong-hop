// This program demonstrates a user controlled for loop.
#include <iostream>
using namespace std;

int main() {
    const int MIN_NUMBER = 1; // Starting number to square
    const int MAX_NUMBER = 10; // Maximum number to square

    int minNumber, maxNumber; // User-defined minimum and maximum values

    // Get the minimum and maximum values to display.
    cout << "I will display a table of numbers and their squares.\n";
    cout << "Enter the starting number: ";
    cin >> minNumber;
    cout << "Enter the ending number: ";
    cin >> maxNumber;

    // Display the table.
    cout << "Number\tNumber Squared\n";
    cout << "-------------------------\n";

    for (int num = minNumber; num <= maxNumber; num++) {
        cout << num << "\t\t" << (num * num) << endl;
    }

    return 0;
}

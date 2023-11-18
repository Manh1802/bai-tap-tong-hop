#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3; // Constant for the array size
    int values[SIZE];   // An array of 3 integers
    int count;          // Loop counter variable

    // Attempt to store three numbers in the three-element array.
    cout << "I will store 3 numbers in a 3-element array!\n";
    for (count = 0; count < SIZE; count++)
        values[count] = 100;

    // If the program is still running, display the numbers.
    cout << "If you see this message, it means the program\n";
    cout << "has not crashed! Here are the numbers:\n";
    for (count = 0; count < SIZE; count++)
        cout << values[count] << endl;

    return 0;
}
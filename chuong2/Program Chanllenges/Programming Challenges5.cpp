#include <iostream>
using namespace std;

int main() 
{
    // Store the values in five different variables
    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;

    // Calculate the sum of the values
    int sum = value1 + value2 + value3 + value4 + value5;

    // Calculate the average
    double average = static_cast<double>(sum) / 5;

    // Display the average on the screen
    cout << "The average of the values is: " << average << endl;

    return 0;
}


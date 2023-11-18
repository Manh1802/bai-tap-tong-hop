#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    double gallonsOfGas = 15.0;
    double milesDriven = 375.0;

    // Calculate the miles per gallon
    double MPG = milesDriven / gallonsOfGas;

    // Display the result on the screen
    cout << "The car gets " << MPG << " miles per gallon." << endl;

    return 0;
}


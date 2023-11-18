#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    double oceanRiseRate = 1.5; // millimeters per year
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    // Calculate the ocean's level rise
    double rise5 = oceanRiseRate * years5;
    double rise7 = oceanRiseRate * years7;
    double rise10 = oceanRiseRate * years10;

    // Display the results
    cout << "The ocean's level will be " << rise5 << " millimeters higher in 5 years." << endl;
    cout << "The ocean's level will be " << rise7 << " millimeters higher in 7 years." << endl;
    cout << "The ocean's level will be " << rise10 << " millimeters higher in 10 years." << endl;

    return 0;
}


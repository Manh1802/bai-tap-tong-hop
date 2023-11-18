#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    double squareFeetInAcre = 43560.0;
    double squareFeetOfLand = 391876.0;

    // Calculate the number of acres
    double acres = squareFeetOfLand / squareFeetInAcre;

    // Display the result
    cout << "The tract of land with " << squareFeetOfLand << " square feet is equivalent to " << acres << " acres." << endl;

    return 0;
}


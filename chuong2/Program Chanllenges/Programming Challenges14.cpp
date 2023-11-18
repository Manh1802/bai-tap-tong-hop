#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    double cost = 14.95;
    double profitPercentage = 0.35;
    double sellingPrice;

    // Calculate the selling price
    sellingPrice = cost * (1 + profitPercentage);

    // Display the result on the screen
    cout << "The selling price of the circuit board is $" << sellingPrice << endl;

    return 0;
}


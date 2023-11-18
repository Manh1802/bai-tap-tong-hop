#include <iostream>
using namespace std;

int main() 
{
    // Define the purchase amount and the sales tax rates
    double purchaseAmount = 95.0;
    double stateSalesTaxRate = 0.04; // 4 percent
    double countySalesTaxRate = 0.02; // 2 percent

    // Calculate the total sales tax
    double stateSalesTax = purchaseAmount * stateSalesTaxRate;
    double countySalesTax = purchaseAmount * countySalesTaxRate;
    double totalSalesTax = stateSalesTax + countySalesTax;

    // Display the total sales tax
    cout << "The total sales tax on a $" << purchaseAmount << " purchase is $" << totalSalesTax << "." << endl;

    return 0;
}


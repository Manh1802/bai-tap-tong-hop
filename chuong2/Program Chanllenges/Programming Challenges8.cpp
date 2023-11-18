#include <iostream>
using namespace std;

int main() 
{
    // Define the prices of the items
    double price1 = 15.95;
    double price2 = 24.95;
    double price3 = 6.95;
    double price4 = 12.95;
    double price5 = 3.95;

    // Calculate the subtotal
    double subtotal = price1 + price2 + price3 + price4 + price5;

    // Define the sales tax rate
    double salesTaxRate = 0.07; // 7%

    // Calculate the sales tax
    double salesTax = subtotal * salesTaxRate;

    // Calculate the total purchase cost
    double total = subtotal + salesTax;

    // Display the results
    cout << "Price of item 1: $" << price1 << endl;
    cout << "Price of item 2: $" << price2 << endl;
    cout << "Price of item 3: $" << price3 << endl;
    cout << "Price of item 4: $" << price4 << endl;
    cout << "Price of item 5: $" << price5 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}


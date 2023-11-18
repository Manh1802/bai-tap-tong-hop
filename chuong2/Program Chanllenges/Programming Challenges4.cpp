#include <iostream>
using namespace std;

int main() 
{
    // Define the meal charge and the tax and tip percentages
    double mealCharge = 88.67;
    double taxRate = 0.0675; // 6.75 percent
    double tipRate = 0.20; // 20 percent

    // Calculate the tax and tip amounts
    double taxAmount = mealCharge * taxRate;
    double totalWithTax = mealCharge + taxAmount;
    double tipAmount = totalWithTax * tipRate;
    double totalBill = totalWithTax + tipAmount;

    // Display the details of the restaurant bill
    cout << "Meal Cost: $" << mealCharge << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;

    return 0;
}


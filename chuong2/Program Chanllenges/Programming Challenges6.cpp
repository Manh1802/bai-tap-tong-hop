#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    double payAmount = 2200.0;
    int payPeriods = 26;
    double annualPay;

    // Calculate the employee's total annual pay
    annualPay = payAmount * payPeriods;

    // Display the total annual pay on the screen
    cout << "The employee's total annual pay is: $" << annualPay << endl;

    return 0;
}


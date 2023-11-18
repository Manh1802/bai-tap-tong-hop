#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    int numberOfShares = 750;
    double pricePerShare = 35.00;
    double commissionRate = 0.02;

    // Calculate the amount paid for the stock alone
    double stockAlone = numberOfShares * pricePerShare;

    // Calculate the amount of the commission
    double commission = stockAlone * commissionRate;

    // Calculate the total amount paid
    double totalPaid = stockAlone + commission;

    // Display the results on the screen
    cout << "Amount paid for the stock alone: $" << stockAlone << endl;
    cout << "Amount of the commission: $" << commission << endl;
    cout << "Total amount paid (stock plus commission): $" << totalPaid << endl;

    return 0;
}


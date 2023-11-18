// This program calculates gross pay.
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const double PAY_RATE = 22.55;     // Hourly pay rate
const double BASE_HOURS = 40.0;    // Max non-overtime hours
const double OT_MULTIPLIER = 1.5;  // Overtime multiplier

// Function prototypes
double calculateBasePay(double hoursWorked);
double calculateOvertimePay(double hoursWorked);

int main()
{
    double hours;    // Hours worked
    double basePay;  // Base pay
    double overtime = 0.0;  // Overtime pay
    double totalPay; // Total pay

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Calculate the base pay.
    basePay = calculateBasePay(hours);

    // Calculate overtime pay, if any.
    if (hours > BASE_HOURS)
        overtime = calculateOvertimePay(hours);

    // Calculate the total pay.
    totalPay = basePay + overtime;

    // Set up numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    // Display the pay.
    cout << "Base pay: $" << basePay << endl
         << "Overtime pay: $" << overtime << endl
         << "Total pay: $" << totalPay << endl;

    return 0;
}

// Definition of function calculateBasePay.
// This function accepts the number of hours worked as an argument
// and returns the employee's pay for non-overtime hours.
double calculateBasePay(double hoursWorked)
{
    double basePay; // To hold base pay

    // Determine base pay.
    if (hoursWorked > BASE_HOURS)
        basePay = BASE_HOURS * PAY_RATE;
    else
        basePay = hoursWorked * PAY_RATE;

    return basePay;
}

// Definition of function calculateOvertimePay.
// This function accepts the number of hours worked as an argument
// and returns the employee's overtime pay.
double calculateOvertimePay(double hoursWorked)
{
    double overtimePay; // To hold overtime pay

    // Determine overtime pay.
    overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;

    return overtimePay;
}

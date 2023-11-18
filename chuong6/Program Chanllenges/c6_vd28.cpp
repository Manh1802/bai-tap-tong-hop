#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
char getEmployeeType();
double calculateWeeklyPay(int hours, double payRate);
double calculateWeeklyPay(double annualSalary);

int main()
{
    char employeeType;  // Menu selection
    int hoursWorked;   // Hours worked
    double hourlyPayRate; // Hourly pay rate
    double annualSalary;  // Yearly salary

    // Set numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // Display the menu and get a selection.
    cout << "Do you want to calculate the weekly pay of\n"
         << "(H) an hourly paid employee, or \n"
         << "(S) a salaried employee?\n";
    employeeType = getEmployeeType();

    // Process the menu selection.
    switch (employeeType)
    {
        // Hourly paid employee
        case 'H':
        case 'h':
            cout << "How many hours were worked? ";
            cin >> hoursWorked;
            cout << "What is the hourly pay rate? ";
            cin >> hourlyPayRate;
            cout << "The gross weekly pay is $"
                 << calculateWeeklyPay(hoursWorked, hourlyPayRate) << endl;
            break;

        // Salaried employee
        case 'S':
        case 's':
            cout << "What is the annual salary? ";
            cin >> annualSalary;
            cout << "The gross weekly pay is $"
                 << calculateWeeklyPay(annualSalary) << endl;
            break;
    }

    return 0;
}

// Definition of function getEmployeeType.
// This function asks the user for an H or an S and returns the validated input.
char getEmployeeType()
{
    char letter;

    // Get the user's selection.
    cout << "Enter your choice (H or S): ";
    cin >> letter;

    // Validate the selection.
    while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
    {
        cout << "Please enter H or S: ";
        cin >> letter;
    }

    return letter;
}

// Definition of overloaded function calculateWeeklyPay for hourly employees.
double calculateWeeklyPay(int hours, double payRate)
{
    return hours * payRate;
}

// Definition of overloaded function calculateWeeklyPay for salaried employees.
double calculateWeeklyPay(double annualSalary)
{
    return annualSalary / 52.0;
}

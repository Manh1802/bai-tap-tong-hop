#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    int totalCustomers = 16500;
    double energyDrinkCustomersPercentage = 0.15;
    double citrusFlavoredPercentage = 0.58;

    // Calculate the approximate number of customers who purchase one or more energy drinks per week
    int energyDrinkCustomers = totalCustomers * energyDrinkCustomersPercentage;

    // Calculate the approximate number of customers who prefer citrus-flavored energy drinks
    int citrusFlavoredCustomers = energyDrinkCustomers * citrusFlavoredPercentage;

    // Display the results on the screen
    cout << "Approximate number of customers who purchase energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << citrusFlavoredCustomers << endl;

    return 0;
}


 // This program converts the speeds 60 kph through
 // 130 kph (in 10 kph increments) to mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for the speeds
    const int START_KPH = 60;      // Starting speed
    const int END_KPH = 130;       // Ending speed
    const int INCREMENT = 10;      // Speed increment

    // Constant for the conversion factor
    const double CONVERSION_FACTOR = 0.6214;

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Display the table headings.
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Display the speeds.
    for (int kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
        // Calculate mph
        double mph = kph * CONVERSION_FACTOR;

        // Display the speeds in kph and mph.
        cout << setw(4) << kph << "\t" << setw(5) << mph << endl;
    }

    return 0;
}

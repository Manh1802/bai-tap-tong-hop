#include <iostream>
#include <iomanip>
using namespace std;

// Hàm để chuyển đổi độ Fahrenheit sang độ Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
    cout << "Fahrenheit  Celsius" << endl;
    cout << "------------------" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsiusValue = celsius(fahrenheit);
        cout << setw(10) << fahrenheit << "°F" << setw(9) << fixed << setprecision(2) << celsiusValue << "°C" << endl;
    }

    return 0;
}

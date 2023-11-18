#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Bảng Chuyển đổi Celsius sang Fahrenheit" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Celsius\tFahrenheit" << endl;

    for (int celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = (static_cast<double>(celsius) * 9 / 5) + 32;
        cout << setw(7) << celsius << "\t" << setw(10) << fixed << setprecision(2) << fahrenheit << endl;
    }

    return 0;
}

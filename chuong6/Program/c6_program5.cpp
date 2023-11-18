#include <iostream>
#include <iomanip>
using namespace std;

// Hàm để tính khoảng cách mà một vật rơi
double fallingDistance(int thoiGian) {
    const double g = 9.8; // Gia tốc do trọng lực (m/s^2)
    double khoangCach = 0.5 * g * thoiGian * thoiGian; // Công thức tính khoảng cách
    return khoangCach;
}

int main() {
    cout << "Thời gian (giây)  Khoảng cách (mét)" << endl;
    cout << "----------------------------------" << endl;

    for (int thoiGian = 1; thoiGian <= 10; thoiGian++) {
        double khoangCach = fallingDistance(thoiGian);
        cout << setw(6) << thoiGian << "s" << setw(17) << fixed << setprecision(2) << khoangCach << "m" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

const int KICHTHUOC = 7;

int main() {
    long empId[KICHTHUOC] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[KICHTHUOC];
    double payRate[KICHTHUOC];
    double wages[KICHTHUOC];

    // Nhập giờ làm việc và mức lương cho từng nhân viên
    for (int i = 0; i < KICHTHUOC; ++i) {
        cout << "Nhập số giờ làm việc của nhân viên " << empId[i] << ": ";
        cin >> hours[i];

        // Kiểm tra hợp lệ cho số giờ làm việc
        while (hours[i] < 0) {
            cout << "Số giờ làm việc không được âm. Nhập lại số giờ làm việc của nhân viên " << empId[i] << ": ";
            cin >> hours[i];
        }

        cout << "Nhập mức lương theo giờ của nhân viên " << empId[i] << ": $";
        cin >> payRate[i];

        // Kiểm tra hợp lệ cho mức lương theo giờ
        while (payRate[i] < 15.00) {
            cout << "Mức lương không được ít hơn $15.00. Nhập lại mức lương theo giờ của nhân viên " << empId[i] << ": $";
            cin >> payRate[i];
        }

        // Tính toán tổng thu nhập
        wages[i] = hours[i] * payRate[i];
    }

    // Hiển thị số nhân viên và tổng thu nhập
    cout << "\nMã số nhân viên\t\tThu nhập Gross" << endl;
    cout << "------------------------------------\t------------" << endl;
    for (int i = 0; i < KICHTHUOC; ++i) {
        cout << empId[i] << "\t\t\t\t$" << wages[i] << endl;
    }

    return 0;
}

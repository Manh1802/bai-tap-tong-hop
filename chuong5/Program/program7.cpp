#include <iostream>
#include <cmath> // Để sử dụng hàm pow
using namespace std;

int main() {
    // Nhập số ngày đã làm việc với kiểm tra tính hợp lệ
    int so_ngay;
    do {
        cout << "Nhập số ngày đã làm việc: ";
        cin >> so_ngay;
        if (so_ngay < 1) {
            cout << "Số ngày làm việc phải ít nhất là 1. Hãy nhập số ngày hợp lệ.\n";
        }
    } while (so_ngay < 1);

    // Khởi tạo biến
    double tong_luong = 0.0;

    // In tiêu đề cho bảng
    cout << "\nNgày\tLương (bằng đô la)" << endl;
    cout << "--------------------------" << endl;

    // Tính toán và hiển thị mức lương cho mỗi ngày và tính tổng lương
    for (int ngay = 1; ngay <= so_ngay; ngay++) {
        double luong = 0.01 * pow(2, ngay - 1);  // Tính mức lương cho ngày hiện tại
        tong_luong += luong;  // Cộng dồn tổng lương
        cout << ngay << "\t$" << luong << endl;
    }

    // Hiển thị tổng lương cuối cùng
    cout << "\nTổng lương trong vòng " << so_ngay << " ngày: $" << tong_luong << endl;

    return 0;
}

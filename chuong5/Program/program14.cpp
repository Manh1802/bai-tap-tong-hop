#include <iostream>
#include <string>
using namespace std;

int main() {
    int so_sinh_vien;

    // Yêu cầu người dùng nhập số lượng sinh viên trong lớp
    cout << "Nhập số lượng sinh viên trong lớp (từ 1 đến 25): ";
    cin >> so_sinh_vien;

    // Kiểm tra tính hợp lệ của số lượng sinh viên
    while (so_sinh_vien < 1 || so_sinh_vien > 25) {
        cout << "Vui lòng nhập số lượng sinh viên hợp lệ (từ 1 đến 25): ";
        cin >> so_sinh_vien;
    }

    string ten_dau, sinh_vien_dau, sinh_vien_cuoi;

    // Vòng lặp để nhập tên của các sinh viên
    for (int i = 1; i <= so_sinh_vien; i++) {
        cout << "Nhập tên của sinh viên thứ " << i << ": ";
        cin >> ten_dau;

        if (i == 1) {
            sinh_vien_dau = ten_dau; // Đặt tên của sinh viên đầu tiên
            sinh_vien_cuoi = ten_dau;  // Đặt tên của sinh viên cuối cùng ban đầu
        } else {
            // So sánh tên để tìm sinh viên đầu và sinh viên cuối
            if (ten_dau < sinh_vien_dau) {
                sinh_vien_dau = ten_dau;
            }
            if (ten_dau > sinh_vien_cuoi) {
                sinh_vien_cuoi = ten_dau;
            }
        }
    }

    // Hiển thị tên của sinh viên đầu và sinh viên cuối trong hàng
    cout << "Sinh viên đứng đầu hàng là: " << sinh_vien_dau << endl;
    cout << "Sinh viên đứng cuối hàng là: " << sinh_vien_cuoi << endl;

    return 0;
}

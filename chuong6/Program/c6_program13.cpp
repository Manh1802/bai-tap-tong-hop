#include <iostream>
using namespace std;

// Hàm để lấy số lượng nhân viên
int getNumberOfEmployees() {
    int soNhanVien;
    do {
        cout << "Nhập số lượng nhân viên trong công ty: ";
        cin >> soNhanVien;
        if (soNhanVien < 1) {
            cout << "Đầu vào không hợp lệ. Vui lòng nhập một số lớn hơn hoặc bằng 1." << endl;
        }
    } while (soNhanVien < 1);
    return soNhanVien;
}

// Hàm để lấy tổng số ngày nghỉ của tất cả nhân viên
int getTotalDaysAbsent(int soNhanVien) {
    int tongNgayNghi = 0;
    for (int i = 1; i <= soNhanVien; i++) {
        int ngayNghi;
        do {
            cout << "Nhập số ngày nhân viên " << i << " nghỉ trong năm qua: ";
            cin >> ngayNghi;
            if (ngayNghi < 0) {
                cout << "Đầu vào không hợp lệ. Vui lòng nhập số ngày không âm." << endl;
            }
        } while (ngayNghi < 0);
        tongNgayNghi += ngayNghi;
    }
    return tongNgayNghi;
}

// Hàm để tính số ngày nghỉ trung bình
double tinhSoNgayNghiTrungBinh(int soNhanVien, int tongNgayNghi) {
    return static_cast<double>(tongNgayNghi) / soNhanVien;
}

int main() {
    int soNhanVien = getNumberOfEmployees();
    int tongNgayNghi = getTotalDaysAbsent(soNhanVien);
    double soNgayNghiTrungBinh = tinhSoNgayNghiTrungBinh(soNhanVien, tongNgayNghi);

    cout << "Số ngày nghỉ trung bình của nhân viên là: " << soNgayNghiTrungBinh << " ngày" << endl;

    return 0;
}

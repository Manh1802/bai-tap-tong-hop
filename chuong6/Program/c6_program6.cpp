#include <iostream>
using namespace std;

// Hàm để tính năng lượng động học của một vật thể
double kineticEnergy(double khoiLuong, double vanToc) {
    const double heSoNangLuongDongHoc = 0.5; // Hệ số cố định (0.5) trong công thức
    double nangLuongDongHoc = heSoNangLuongDongHoc * khoiLuong * vanToc * vanToc; // Công thức tính năng lượng động học
    return nangLuongDongHoc;
}

int main() {
    double khoiLuong, vanToc;

    // Nhập giá trị khối lượng và vận tốc từ người dùng
    cout << "Nhập khối lượng của vật thể (kilogram): ";
    cin >> khoiLuong;
    cout << "Nhập vận tốc của vật thể (mét/giây): ";
    cin >> vanToc;

    // Tính năng lượng động học bằng cách sử dụng hàm
    double nangLuong = kineticEnergy(khoiLuong, vanToc);

    // Hiển thị năng lượng động học tính toán được
    cout << "Năng lượng động học của vật thể là " << nangLuong << " joule." << endl;

    return 0;
}

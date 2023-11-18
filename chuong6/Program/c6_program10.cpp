#include <iostream>
#include <cmath>
using namespace std;

// Hàm để tính giá trị tương lai
double futureValue(double giaTriHienTai, double laiSuatHangThang, int soThang) {
    double giaTriTuongLai = giaTriHienTai * pow(1 + laiSuatHangThang, soThang);
    return giaTriTuongLai;
}

int main() {
    double giaTriHienTai, laiSuatHangThang;
    int soThang;

    cout << "Nhập giá trị hiện tại của tài khoản: $";
    cin >> giaTriHienTai;
    cout << "Nhập tỷ lệ lãi suất hàng tháng (dưới dạng số thập phân): ";
    cin >> laiSuatHangThang;
    cout << "Nhập số tháng: ";
    cin >> soThang;

    double giaTriTuongLaiCuaTaiKhoan = futureValue(giaTriHienTai, laiSuatHangThang, soThang);

    cout << "Giá trị tương lai của tài khoản sau " << soThang << " tháng là: $" << giaTriTuongLaiCuaTaiKhoan << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

// Hàm để tính giá trị hiện tại
double presentValue(double giaTriTuongLai, double laiSuatHangNam, int soNam) {
    double giaTriHienTai = giaTriTuongLai / pow(1 + laiSuatHangNam, soNam);
    return giaTriHienTai;
}

int main() {
    double giaTriTuongLai, laiSuatHangNam;
    int soNam;

    cout << "Nhập giá trị tương lai mong muốn (F): $";
    cin >> giaTriTuongLai;
    cout << "Nhập tỷ lệ lãi suất hàng năm (dưới dạng số thập phân): ";
    cin >> laiSuatHangNam;
    cout << "Nhập số năm (n): ";
    cin >> soNam;

    double tienGuiBanDau = presentValue(giaTriTuongLai, laiSuatHangNam, soNam);

    cout << "Bạn cần gửi $" << tienGuiBanDau << " vào ngày hôm nay để đạt được giá trị tương lai $" << giaTriTuongLai << " sau " << soNam << " năm." << endl;

    return 0;
}

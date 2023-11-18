#include <iostream>
using namespace std;

// Hàm tính kích thước mới của dân số cho một năm
double tinhKichThuocDanSo(double danSoTruocDo, double tyLeSinh, double tyLeChet, double nguoiDiVao, double nguoiDiRa) {
    return danSoTruocDo + (danSoTruocDo * (tyLeSinh - tyLeChet) / 100.0) + nguoiDiVao - nguoiDiRa;
}

int main() {
    double kichThuocBanDau, tyLeSinh, tyLeChet, nguoiDiVao, nguoiDiRa;
    int soNam;

    // Nhập kích thước ban đầu
    cout << "Nhập kích thước ban đầu của dân số (lớn hơn hoặc bằng 2): ";
    cin >> kichThuocBanDau;

    if (kichThuocBanDau < 2) {
        cout << "Kích thước ban đầu phải lớn hơn hoặc bằng 2." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    // Nhập tỷ lệ sinh
    cout << "Nhập tỷ lệ sinh hàng năm (số dương): ";
    cin >> tyLeSinh;

    if (tyLeSinh < 0) {
        cout << "Tỷ lệ sinh không thể là số âm." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    // Nhập tỷ lệ chết
    cout << "Nhập tỷ lệ chết hàng năm (số dương): ";
    cin >> tyLeChet;

    if (tyLeChet < 0) {
        cout << "Tỷ lệ chết không thể là số âm." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    // Nhập số người di vào hàng năm
    cout << "Nhập số người thường di vào khu vực mỗi năm (không âm): ";
    cin >> nguoiDiVao;

    if (nguoiDiVao < 0) {
        cout << "Số người di vào không thể là số âm." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    // Nhập số người di ra hàng năm
    cout << "Nhập số người thường di ra khỏi khu vực mỗi năm (không âm): ";
    cin >> nguoiDiRa;

    if (nguoiDiRa < 0) {
        cout << "Số người di ra không thể là số âm." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    // Nhập số năm cần hiển thị
    cout << "Nhập số năm cần hiển thị (lớn hơn hoặc bằng 1): ";
    cin >> soNam;

    if (soNam < 1) {
        cout << "Số năm phải lớn hơn hoặc bằng 1." << endl;
        return 1; // Thoát chương trình với mã lỗi
    }

    // Hiển thị kích thước dân số cho mỗi năm
    cout << "Năm 0: Dân số = " << kichThuocBanDau << endl;
    for (int nam = 1; nam <= soNam; nam++) {
        kichThuocBanDau = tinhKichThuocDanSo(kichThuocBanDau, tyLeSinh, tyLeChet, nguoiDiVao, nguoiDiRa);
        cout << "Năm " << nam << ": Dân số = " << kichThuocBanDau << endl;
    }

    return 0; // Thoát chương trình thành công
}

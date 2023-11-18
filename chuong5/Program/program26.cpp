#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outputFile("BaoCaoSoDuTaiKhoanTietKiem.txt");

    if (!outputFile) {
        cout << "Lỗi tạo tệp đầu ra." << endl;
        return 1; // Thoát với mã lỗi
    }

    double laiSuatHangNam;
    double soDuBanDau;
    int thang;

    cout << "Nhập lãi suất hàng năm (%): ";
    cin >> laiSuatHangNam;
    cout << "Nhập số dư ban đầu: ";
    cin >> soDuBanDau;
    cout << "Nhập số tháng: ";
    cin >> thang;

    outputFile << "Tháng\tSố Dư Ban Đầu\tLãi\tSố Dư Cuối Kỳ" << endl;

    for (int i = 1; i <= thang; i++) {
        double lai = (soDuBanDau * laiSuatHangNam) / 12.0;
        double soDuCuoiKy = soDuBanDau + lai;

        outputFile << i << "\t" << fixed << setprecision(2) << soDuBanDau << "\t\t"
                   << lai << "\t\t" << soDuCuoiKy << endl;

        soDuBanDau = soDuCuoiKy;
    }

    outputFile.close();

    cout << "Báo cáo đã được ghi vào BaoCaoSoDuTaiKhoanTietKiem.txt." << endl;

    return 0;
}

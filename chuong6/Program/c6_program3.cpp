#include <iostream>
#include <string>
using namespace std;

// Hàm để lấy doanh số bán hàng trong một quý cho một phòng ban
double getSales(const string& tenPhongBan) {
    double doanhSo;
    do {
        cout << "Nhập doanh số bán hàng trong một quý cho " << tenPhongBan << ": $";
        cin >> doanhSo;
        if (doanhSo < 0.0) {
            cout << "Doanh số không thể nhỏ hơn $0.00. Xin vui lòng nhập số tiền hợp lệ." << endl;
        }
    } while (doanhSo < 0.0);
    return doanhSo;
}

// Hàm để tìm phòng ban có doanh số cao nhất
void timPhongBanDoanhSoCaoNhat(double doanhSoBacDong, double doanhSoNamDong, double doanhSoBacTay, double doanhSoNamTay) {
    double maxDoanhSo = doanhSoBacDong;
    string phongBanMax = "Bắc Đông";

    if (doanhSoNamDong > maxDoanhSo) {
        maxDoanhSo = doanhSoNamDong;
        phongBanMax = "Nam Đông";
    }
    if (doanhSoBacTay > maxDoanhSo) {
        maxDoanhSo = doanhSoBacTay;
        phongBanMax = "Bắc Tây";
    }
    if (doanhSoNamTay > maxDoanhSo) {
        maxDoanhSo = doanhSoNamTay;
        phongBanMax = "Nam Tây";
    }

    cout << "Phòng ban có doanh số cao nhất là " << phongBanMax << " với $" << maxDoanhSo << " doanh số bán hàng." << endl;
}

int main() {
    // Nhập doanh số bán hàng trong một quý cho mỗi phòng ban
    double doanhSoBacDong = getSales("Bắc Đông");
    double doanhSoNamDong = getSales("Nam Đông");
    double doanhSoBacTay = getSales("Bắc Tây");
    double doanhSoNamTay = getSales("Nam Tây");

    // Tìm và hiển thị phòng ban có doanh số bán hàng cao nhất
    timPhongBanDoanhSoCaoNhat(doanhSoBacDong, doanhSoNamDong, doanhSoBacTay, doanhSoNamTay);

    return 0;
}

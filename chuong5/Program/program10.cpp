#include <iostream>
using namespace std;

int main() {
    int so_nam;
    
    // Yêu cầu người dùng nhập số năm
    cout << "Nhập số năm: ";
    cin >> so_nam;

    // Kiểm tra tính hợp lệ của số năm
    while (so_nam < 1) {
        cout << "Hãy nhập một số năm hợp lệ (ít nhất là 1): ";
        cin >> so_nam;
    }

    double tong_mua = 0.0;
    int tong_thang = so_nam * 12;

    // Vòng lặp bên ngoài cho mỗi năm
    for (int nam = 1; nam <= so_nam; nam++) {
        // Vòng lặp bên trong cho từng tháng
        for (int thang = 1; thang <= 12; thang++) {
            double mua_theo_thang;

            // Yêu cầu người dùng nhập số inches mưa cho tháng
            cout << "Nhập số inches mưa cho Năm " << nam << ", Tháng " << thang << ": ";
            cin >> mua_theo_thang;

            // Kiểm tra tính hợp lệ của mưa hàng tháng
            while (mua_theo_thang < 0) {
                cout << "Hãy nhập một giá trị mưa hàng tháng hợp lệ (không âm): ";
                cin >> mua_theo_thang;
            }

            tong_mua += mua_theo_thang;
        }
    }

    // Tính tổng inches mưa và giá trị trung bình mỗi tháng
    double trung_binh_mua = tong_mua / tong_thang;

    // Hiển thị kết quả
    cout << "\nSố tháng: " << tong_thang << endl;
    cout << "Tổng inches mưa: " << tong_mua << " inches" << endl;
    cout << "Trung bình mỗi tháng: " << trung_binh_mua << " inches" << endl;

    return 0;
}

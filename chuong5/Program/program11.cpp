#include <iostream>
using namespace std;

int main() {
    int so_luong_ban_dau;
    double tang_truong_trung_binh_theo_ngay;
    int so_ngay;

    // Yêu cầu người dùng nhập thông tin
    cout << "Nhập số lượng ban đầu của sinh vật: ";
    cin >> so_luong_ban_dau;

    // Kiểm tra tính hợp lệ cho số lượng ban đầu
    while (so_luong_ban_dau < 2) {
        cout << "Vui lòng nhập số lượng ban đầu hợp lệ (ít nhất là 2): ";
        cin >> so_luong_ban_dau;
    }

    cout << "Nhập tỷ lệ tăng trưởng hàng ngày trung bình (dưới dạng phần trăm): ";
    cin >> tang_truong_trung_binh_theo_ngay;

    // Kiểm tra tính hợp lệ cho tỷ lệ tăng trưởng hàng ngày
    while (tang_truong_trung_binh_theo_ngay < 0) {
        cout << "Vui lòng nhập tỷ lệ tăng trưởng hàng ngày dương: ";
        cin >> tang_truong_trung_binh_theo_ngay;
    }

    cout << "Nhập số ngày chúng sẽ tăng trưởng: ";
    cin >> so_ngay;

    // Kiểm tra tính hợp lệ cho số ngày
    while (so_ngay < 1) {
        cout << "Vui lòng nhập số ngày hợp lệ (ít nhất là 1): ";
        cin >> so_ngay;
    }

    // Tính toán và hiển thị quy mô của quần thể cho từng ngày
    cout << "\nDự Đoán Quần Thể:" << endl;
    cout << "Ngày\tQuần Thể" << endl;
    cout << "------------------" << endl;

    double quan_the = so_luong_ban_dau;

    for (int ngay = 1; ngay <= so_ngay; ngay++) {
        cout << ngay << "\t" << quan_the << endl;
        quan_the += (tang_truong_trung_binh_theo_ngay / 100.0) * quan_the;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int so_tang;
    int tong_so_phong = 0;
    int tong_phong_da_thue = 0;

    // Yêu cầu người dùng nhập số tầng của khách sạn
    cout << "Nhập số tầng của khách sạn: ";
    cin >> so_tang;

    // Kiểm tra tính hợp lệ của số tầng
    while (so_tang < 1) {
        cout << "Hãy nhập một số tầng hợp lệ (ít nhất là 1): ";
        cin >> so_tang;
    }

    // Lặp qua từng tầng của khách sạn
    for (int tang = 1; tang <= so_tang; tang++) {
        int so_phong, so_phong_da_thue;

        // Yêu cầu người dùng nhập số phòng trên tầng
        cout << "Nhập số phòng trên tầng " << tang << ": ";
        cin >> so_phong;

        // Kiểm tra tính hợp lệ của số phòng
        while (so_phong < 1) {
            cout << "Hãy nhập một số phòng hợp lệ (ít nhất là 1): ";
            cin >> so_phong;
        }

        // Yêu cầu người dùng nhập số phòng đã được thuê trên tầng
        cout << "Nhập số phòng đã được thuê trên tầng " << tang << ": ";
        cin >> so_phong_da_thue;

        // Kiểm tra tính hợp lệ của số phòng đã được thuê
        while (so_phong_da_thue < 0 || so_phong_da_thue > so_phong) {
            cout << "Hãy nhập một số phòng đã được thuê hợp lệ (từ 0 đến " << so_phong << "): ";
            cin >> so_phong_da_thue;
        }

        // Cập nhật tổng số phòng và tổng số phòng đã được thuê
        tong_so_phong += so_phong;
        tong_phong_da_thue += so_phong_da_thue;
    }

    // Tính tỷ lệ phòng đã được thuê
    double ty_le_thue = static_cast<double>(tong_phong_da_thue) / tong_so_phong * 100.0;

    // Hiển thị kết quả
    cout << "\nTóm tắt Khách sạn:" << endl;
    cout << "Tổng số phòng trong khách sạn: " << tong_so_phong << endl;
    cout << "Tổng số phòng đã được thuê: " << tong_phong_da_thue << endl;
    cout << "Tổng số phòng chưa được thuê: " << (tong_so_phong - tong_phong_da_thue) << endl;
    cout << "Tỷ lệ phòng đã được thuê: " << ty_le_thue << "%" << endl;

    return 0;
}

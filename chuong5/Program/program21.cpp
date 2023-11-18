#include <iostream>
#include <cstdlib> // cho rand() và srand()
#include <ctime>   // cho time()
using namespace std;

int main() {
    // Khởi tạo giá trị seed ngẫu nhiên
    srand(static_cast<unsigned int>(time(nullptr)));

    // Sinh một số ngẫu nhiên trong khoảng từ 1 đến 100
    int soNgauNhien = rand() % 100 + 1;
    
    int duDoanCuaNguoiDung;
    int soLanThu = 0;

    cout << "Chào mừng bạn đến với Trò chơi Đoán Số!" << endl;

    do {
        cout << "Hãy đoán số (từ 1 đến 100): ";
        cin >> duDoanCuaNguoiDung;
        soLanThu++;

        if (duDoanCuaNguoiDung < soNgauNhien) {
            cout << "Thấp quá, hãy thử lại." << endl;
        } else if (duDoanCuaNguoiDung > soNgauNhien) {
            cout << "Cao quá, hãy thử lại." << endl;
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số " << soNgauNhien << " sau " << soLanThu << " lần đoán." << endl;
        }
    } while (duDoanCuaNguoiDung != soNgauNhien);

    return 0;
}

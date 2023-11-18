#include <iostream>
#include <cstdlib> // Cho hàm rand() và srand()
#include <ctime>   // Cho hàm time()
using namespace std;

// Hàm để mô phỏng việc tung đồng xu
void coinToss() {
    int soNgauNhien = rand() % 2 + 1; // Sinh số ngẫu nhiên trong khoảng từ 1 đến 2

    if (soNgauNhien == 1) {
        cout << "Mặt sấp" << endl;
    } else {
        cout << "Mặt ngửa" << endl;
    }
}

int main() {
    // Khởi tạo bộ tạo số ngẫu nhiên với thời gian hiện tại
    srand(static_cast<unsigned>(time(0)));

    int soLanTung;

    cout << "Bạn muốn tung đồng xu bao nhiêu lần? ";
    cin >> soLanTung;

    cout << "Kết quả tung đồng xu:" << endl;

    for (int i = 0; i < soLanTung; i++) {
        cout << "Lần tung " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}

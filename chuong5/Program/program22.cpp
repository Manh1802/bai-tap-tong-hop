#include <iostream>
using namespace std;

int main() {
    int doDaiCanh;

    cout << "Nhập một số nguyên dương (1-15) là độ dài cạnh của hình vuông: ";
    cin >> doDaiCanh;

    if (doDaiCanh >= 1 && doDaiCanh <= 15) {
        for (int i = 0; i < doDaiCanh; i++) {
            for (int j = 0; j < doDaiCanh; j++) {
                cout << 'X';
            }
            cout << endl;
        }
    } else {
        cout << "Đầu vào không hợp lệ. Vui lòng nhập một số nguyên dương từ 1 đến 15." << endl;
    }

    return 0;
}

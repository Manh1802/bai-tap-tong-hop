#include <iostream>
using namespace std;

// Hàm để hiển thị các số trong mảng lớn hơn số n
void hienThiSoLonHonN(int mang[], int kichThuoc, int n) {
    cout << "Các số trong mảng lớn hơn " << n << " là: ";
    for (int i = 0; i < kichThuoc; ++i) {
        if (mang[i] > n) {
            cout << mang[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int kichThuoc;
    cout << "Nhập kích thước của mảng: ";
    cin >> kichThuoc;

    int mang[kichThuoc];
    cout << "Nhập " << kichThuoc << " số nguyên vào mảng:" << endl;
    for (int i = 0; i < kichThuoc; ++i) {
        cin >> mang[i];
    }

    int n;
    cout << "Nhập một số để so sánh: ";
    cin >> n;

    // Gọi hàm để hiển thị các số lớn hơn n
    hienThiSoLonHonN(mang, kichThuoc, n);

    return 0;
}

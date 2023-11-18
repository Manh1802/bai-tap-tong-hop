#include <iostream>
using namespace std;

int main() {
    // Khai báo một mảng chứa 10 giá trị từ người dùng
    int mang[10];
    
    // Nhập 10 giá trị vào mảng từ người dùng
    cout << "Nhập 10 giá trị vào mảng:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Nhập giá trị thứ " << i + 1 << ": ";
        cin >> mang[i];
    }

    // Tìm giá trị lớn nhất và nhỏ nhất trong mảng
    int lonNhat = mang[0];
    int nhoNhat = mang[0];
    for (int i = 1; i < 10; ++i) {
        if (mang[i] > lonNhat) {
            lonNhat = mang[i];
        }
        if (mang[i] < nhoNhat) {
            nhoNhat = mang[i];
        }
    }

    // Hiển thị giá trị lớn nhất và nhỏ nhất
    cout << "Giá trị lớn nhất trong mảng là: " << lonNhat << endl;
    cout << "Giá trị nhỏ nhất trong mảng là: " << nhoNhat << endl;

    return 0;
}

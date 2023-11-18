#include <iostream>
using namespace std;

const int KICH_THUOC = 3;

bool laLoShuMagicSquare(int hinhVuong[KICH_THUOC][KICH_THUOC]) {
    int tong = 0;

    // Tính tổng của hàng đầu tiên
    for (int i = 0; i < KICH_THUOC; ++i) {
        tong += hinhVuong[0][i];
    }

    // Kiểm tra xem tổng của hàng, cột và đường chéo có bằng nhau và bằng tổng của hàng đầu tiên không
    for (int i = 0; i < KICH_THUOC; ++i) {
        int tongHang = 0;
        int tongCot = 0;

        for (int j = 0; j < KICH_THUOC; ++j) {
            tongHang += hinhVuong[i][j];
            tongCot += hinhVuong[j][i];
        }

        // Kiểm tra tổng của hàng và cột
        if (tongHang != tong || tongCot != tong) {
            return false;
        }
    }

    // Kiểm tra tổng của đường chéo chính và đường chéo phụ
    int tongDuongCheoChinh = hinhVuong[0][0] + hinhVuong[1][1] + hinhVuong[2][2];
    int tongDuongCheoPhu = hinhVuong[0][2] + hinhVuong[1][1] + hinhVuong[2][0];

    if (tongDuongCheoChinh != tong || tongDuongCheoPhu != tong) {
        return false;
    }

    return true;
}

int main() {
    int hinhVuong[KICH_THUOC][KICH_THUOC];

    // Nhập các phần tử của hình vuông 3x3
    cout << "Nhập ma trận 3x3: " << endl;
    for (int i = 0; i < KICH_THUOC; ++i) {
        for (int j = 0; j < KICH_THUOC; ++j) {
            cin >> hinhVuong[i][j];
        }
    }

    // Kiểm tra xem hình vuông có phải là Lo Shu Magic Square không
    if (laLoShuMagicSquare(hinhVuong)) {
        cout << "Hình vuông là Lo Shu Magic Square." << endl;
    } else {
        cout << "Hình vuông không phải là Lo Shu Magic Square." << endl;
    }

    return 0;
}

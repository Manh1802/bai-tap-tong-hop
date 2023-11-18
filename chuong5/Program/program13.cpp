#include <iostream>
using namespace std;

int main() {
    int so_nguyen;
    int nho_nhat = INT_MAX; // Khởi tạo nho_nhat bằng giá trị số nguyên lớn nhất có thể
    int lon_nhat = INT_MIN; // Khởi tạo lon_nhat bằng giá trị số nguyên nhỏ nhất có thể

    cout << "Nhập một chuỗi số nguyên (-99 để kết thúc):" << endl;

    do {
        cout << "Nhập một số nguyên: ";
        cin >> so_nguyen;

        if (so_nguyen == -99) {
            // Người dùng nhập -99, báo hiệu kết thúc chuỗi
            break;
        }

        // Cập nhật giá trị nhỏ nhất và lớn nhất
        if (so_nguyen < nho_nhat) {
            nho_nhat = so_nguyen;
        }

        if (so_nguyen > lon_nhat) {
            lon_nhat = so_nguyen;
        }

    } while (true);

    if (nho_nhat == INT_MAX || lon_nhat == INT_MIN) {
        cout << "Không có số hợp lệ nào được nhập." << endl;
    } else {
        cout << "Số nhỏ nhất được nhập: " << nho_nhat << endl;
        cout << "Số lớn nhất được nhập: " << lon_nhat << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SO_CUA_HANG = 5;
    int doanh_so[SO_CUA_HANG];

    // Nhập dữ liệu doanh số cho từng cửa hàng
    for (int i = 0; i < SO_CUA_HANG; i++) {
        cout << "Nhập doanh số hôm nay của Cửa hàng " << i + 1 << ": $";
        cin >> doanh_so[i];

        // Đảm bảo giá trị nhập vào là số không âm
        while (doanh_so[i] < 0) {
            cout << "Vui lòng nhập một số tiền doanh số không âm: $";
            cin >> doanh_so[i];
        }
    }

    // Hiển thị biểu đồ cột
    cout << "\nBiểu đồ cột Doanh số:" << endl;
    for (int i = 0; i < SO_CUA_HANG; i++) {
        cout << "Cửa hàng " << i + 1 << ": ";
        for (int j = 0; j < doanh_so[i] / 100; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

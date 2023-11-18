#include <iostream>
using namespace std;

int main() {
    char lua_chon;

    do {
        // Hiển thị menu
        cout << "Menu Trò chơi Toán học:" << endl;
        cout << "A. Cộng" << endl;
        cout << "S. Trừ" << endl;
        cout << "M. Nhân" << endl;
        cout << "D. Chia" << endl;
        cout << "Q. Thoát" << endl;
        cout << "Chọn một tùy chọn: ";
        cin >> lua_chon;

        switch (lua_chon) {
            case 'A':
            case 'a':
                // Phép cộng
                int so1, so2;
                cout << "Nhập hai số để thực hiện phép cộng: ";
                cin >> so1 >> so2;
                cout << "Kết quả: " << so1 + so2 << endl;
                break;

            case 'S':
            case 's':
                // Phép trừ
                cout << "Nhập hai số để thực hiện phép trừ: ";
                cin >> so1 >> so2;
                cout << "Kết quả: " << so1 - so2 << endl;
                break;

            case 'M':
            case 'm':
                // Phép nhân
                cout << "Nhập hai số để thực hiện phép nhân: ";
                cin >> so1 >> so2;
                cout << "Kết quả: " << so1 * so2 << endl;
                break;

            case 'D':
            case 'd':
                // Phép chia
                double thuong, chia;
                cout << "Nhập hai số để thực hiện phép chia: ";
                cin >> thuong >> chia;
                if (chia != 0) {
                    cout << "Kết quả: " << thuong / chia << endl;
                } else {
                    cout << "Lỗi: Chia cho số 0." << endl;
                }
                break;

            case 'Q':
            case 'q':
                // Thoát khỏi chương trình
                cout << "Tạm biệt!" << endl;
                break;

            default:
                // Lựa chọn không hợp lệ
                cout << "Lựa chọn không hợp lệ. Hãy chọn một tùy chọn hợp lệ." << endl;
        }
    } while (lua_chon != 'Q' && lua_chon != 'q');

    return 0;
}

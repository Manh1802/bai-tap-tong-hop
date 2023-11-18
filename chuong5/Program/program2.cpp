#include <iostream>
using namespace std;

int main() {
    // Hiển thị 16 ký tự trên mỗi dòng cho các mã ASCII từ 0 đến 127

    for (int i = 0; i < 128; i++) {
        // Kiểm tra xem chúng ta cần bắt đầu một dòng mới không
        if (i > 0 && i % 16 == 0) {
            cout << endl;  // Bắt đầu một dòng mới
        }

        // Hiển thị ký tự cho mã ASCII hiện tại
        cout << char(i) << ' ';
    }

    // In ký tự newline cuối cùng để kết thúc dòng cuối cùng
    cout << endl;

    return 0;
}

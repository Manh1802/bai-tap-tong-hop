#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float toc_do;
    int gio;

    // Nhập thông tin về tốc độ với kiểm tra tính hợp lệ
    do {
        cout << "Tốc độ của phương tiện (mph)? ";
        cin >> toc_do;
        if (toc_do < 0) {
            cout << "Tốc độ không thể là số âm. Hãy nhập tốc độ không âm.\n";
        }
    } while (toc_do < 0);

    // Nhập thông tin về số giờ với kiểm tra tính hợp lệ
    do {
        cout << "Trong bao nhiêu giờ đã di chuyển? ";
        cin >> gio;
        if (gio < 1) {
            cout << "Thời gian di chuyển phải ít nhất là 1 giờ. Hãy nhập thời gian hợp lệ.\n";
        }
    } while (gio < 1);

    // In tiêu đề cho bảng
    cout << "Giờ\tKhoảng cách đã di chuyển" << endl;
    cout << "------------------------" << endl;

    // Tính toán và hiển thị khoảng cách cho mỗi giờ
    for (int gi = 1; gi <= gio; gi++) {
        float khoang_cach = toc_do * gi;
        cout << gi << "\t" << khoang_cach << endl;
    }

    return 0;
}

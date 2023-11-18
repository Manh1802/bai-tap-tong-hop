#include <iostream>
using namespace std;

int main() {
    // Giả định mực nước biển tăng khoảng 1,5 milimét mỗi năm
    const float muc_tang_hang_nam = 1.5;  // milimét mỗi năm
    const int so_nam = 25;

    // In tiêu đề cho bảng
    cout << "Năm\tMực nước biển tăng (milimét)" << endl;
    cout << "---------------------------------" << endl;

    // Tính và hiển thị mực nước biển tăng cho mỗi năm
    for (int nam = 1; nam <= so_nam; nam++) {
        float milimet_tang = muc_tang_hang_nam * nam;
        cout << nam << "\t" << milimet_tang << " mm" << endl;
    }

    return 0;
}

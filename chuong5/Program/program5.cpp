#include <iostream>
#include <cmath> // Để sử dụng hàm pow
using namespace std;

int main() {
    // Hằng số
    const float phi_hien_tai = 2500.0;  // Mức phí hội viên hiện tại
    const float ty_le_tang_hang_nam = 0.04;  // Tỷ lệ tăng hàng năm
    const int so_nam = 6;  // Số năm dự kiến

    // In tiêu đề cho bảng
    cout << "Năm\tMức Phí Dự Kiến" << endl;
    cout << "-------------------" << endl;

    // Tính toán và hiển thị mức phí dự kiến cho mỗi năm
    for (int nam = 1; nam <= so_nam; nam++) {
        float muc_phi_du_kien = phi_hien_tai * pow(1 + ty_le_tang_hang_nam, nam);
        cout << nam << "\t$" << muc_phi_du_kien << endl;
    }

    return 0;
}

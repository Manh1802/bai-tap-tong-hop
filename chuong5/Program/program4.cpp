#include <iostream>
using namespace std;

int main() {
    // Hằng số
    const float calo_mot_phut = 3.6;  // Calo mỗi phút
    const int thoi_gian[] = {5, 10, 15, 20, 25, 30};  // Các khoảng thời gian

    // In tiêu đề cho bảng
    cout << "Phút\tCalo Đốt Cháy" << endl;
    cout << "-------------------" << endl;

    // Tính toán và hiển thị calo đốt cháy cho từng khoảng thời gian
    for (int i = 0; i < sizeof(thoi_gian) / sizeof(thoi_gian[0]); i++) {
        int phut = thoi_gian[i];
        float calo_dot_chay = calo_mot_phut * phut;
        cout << phut << "\t" << calo_dot_chay << " calo" << endl;
    }

    return 0;
}

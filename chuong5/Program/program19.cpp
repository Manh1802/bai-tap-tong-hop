#include <iostream>
using namespace std;

int main() {
    double ngan_sach;
    double chi_phi = 0.0;
    double chi_tieu;

    // Yêu cầu người dùng nhập ngân sách
    cout << "Nhập ngân sách cho tháng: $";
    cin >> ngan_sach;

    // Nhập các chi tiêu
    while (true) {
        cout << "Nhập một chi tiêu (hoặc 0 để kết thúc): $";
        cin >> chi_tieu;

        // Kiểm tra xem người dùng muốn kết thúc nhập chi tiêu
        if (chi_tieu == 0) {
            break;
        }

        // Cộng chi tiêu vào tổng chi phí
        chi_phi += chi_tieu;
    }

    // Tính chênh lệch giữa ngân sách và tổng chi phí
    double chenh_lech = ngan_sach - chi_phi;

    // Hiển thị kết quả
    cout << "Ngân sách: $" << ngan_sach << endl;
    cout << "Tổng Chi Phí: $" << chi_phi << endl;

    if (chenh_lech > 0) {
        cout << "Bạn tiêu ít hơn ngân sách $" << chenh_lech << endl;
    } else if (chenh_lech < 0) {
        cout << "Bạn tiêu nhiều hơn ngân sách $" << -chenh_lech << endl;
    } else {
        cout << "Bạn tiêu đúng ngân sách." << endl;
    }

    return 0;
}

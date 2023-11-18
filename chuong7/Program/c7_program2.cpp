#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mua[12]; // Mảng để lưu trữ lượng mưa hàng tháng
    double tongMua = 0;
    double trungBinhMua;
    int thangNhieuMua = 0;
    int thangItMua = 0;

    // Nhập lượng mưa hàng tháng với kiểm tra dữ liệu đầu vào
    for (int i = 0; i < 12; ++i) {
        do {
            cout << "Nhập lượng mưa cho tháng " << i + 1 << " (tính bằng inches): ";
            cin >> mua[i];
            // Kiểm tra dữ liệu đầu vào: Không chấp nhận số âm
            if (mua[i] < 0) {
                cout << "Dữ liệu không hợp lệ. Xin vui lòng nhập số không âm.\n";
            }
        } while (mua[i] < 0);

        // Tính tổng lượng mưa
        tongMua += mua[i];

        // Xác định tháng có lượng mưa nhiều nhất và ít nhất
        if (mua[i] > mua[thangNhieuMua]) {
            thangNhieuMua = i;
        }
        if (mua[i] < mua[thangItMua]) {
            thangItMua = i;
        }
    }

    // Tính lượng mưa trung bình
    trungBinhMua = tongMua / 12.0;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Tổng lượng mưa trong năm: " << tongMua << " inches\n";
    cout << "Lượng mưa trung bình mỗi tháng: " << trungBinhMua << " inches\n";
    cout << "Tháng có lượng mưa nhiều nhất: Tháng " << thangNhieuMua + 1 << endl;
    cout << "Tháng có lượng mưa ít nhất: Tháng " << thangItMua + 1 << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Mảng chứa tên các loại sốt
    string tenSot[] = {"nhẹ", "vừa", "ngọt", "cay", "đậm"};
    // Mảng chứa số lượng lọ sốt bán được cho từng loại
    int soLuongBan[5] = {0, 0, 0, 0, 0};

    // Nhập dữ liệu số lượng lọ bán được cho từng loại sốt với kiểm tra dữ liệu đầu vào
    for (int i = 0; i < 5; ++i) {
        do {
            cout << "Nhập số lượng lọ bán được cho sốt " << tenSot[i] << ": ";
            cin >> soLuongBan[i];
            // Kiểm tra dữ liệu đầu vào: Không chấp nhận số âm
            if (soLuongBan[i] < 0) {
                cout << "Dữ liệu không hợp lệ. Vui lòng nhập số không âm.\n";
            }
        } while (soLuongBan[i] < 0);
    }

    // Tính tổng số lượng bán được và xác định loại sốt bán chạy nhất và ít nhất
    int tongSoLuongBan = 0;
    int chiSoSotBanChayNhat = 0;
    int chiSoSotBanItNhat = 0;
    for (int i = 0; i < 5; ++i) {
        tongSoLuongBan += soLuongBan[i];
        if (soLuongBan[i] > soLuongBan[chiSoSotBanChayNhat]) {
            chiSoSotBanChayNhat = i;
        }
        if (soLuongBan[i] < soLuongBan[chiSoSotBanItNhat]) {
            chiSoSotBanItNhat = i;
        }
    }

    // Hiển thị báo cáo số lượng bán được
    cout << "\nBáo Cáo Số Lượng Bán Được:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Sốt " << tenSot[i] << ": " << soLuongBan[i] << " lọ\n";
    }
    cout << "Tổng số lượng bán được: " << tongSoLuongBan << " lọ\n";
    cout << "Sản phẩm bán chạy nhất: Sốt " << tenSot[chiSoSotBanChayNhat] << "\n";
    cout << "Sản phẩm bán ít nhất: Sốt " << tenSot[chiSoSotBanItNhat] << "\n";

    return 0;
}

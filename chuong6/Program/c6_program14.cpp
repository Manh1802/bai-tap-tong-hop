#include <iostream>
using namespace std;

// Hàm để tính và hiển thị trạng thái đơn hàng
void hienThiTrangThaiDonHang(int cuonDaDat, int cuonCoSan, bool phiVanChuyenDacBiet = false, double phiMoiCuon = 10.00) {
    // Kiểm tra tính hợp lệ của đầu vào
    if (cuonDaDat < 1 || cuonCoSan < 0 || phiMoiCuon < 0.00) {
        cout << "Đầu vào không hợp lệ. Vui lòng kiểm tra số lượng cuộn đã đặt, số lượng cuộn có sẵn và các phí." << endl;
        return;
    }

    int cuonSanSangVanChuyen = 0;
    int cuonChoGiaoHang = 0;

    if (cuonDaDat <= cuonCoSan) {
        cuonSanSangVanChuyen = cuonDaDat;
    } else {
        cuonSanSangVanChuyen = cuonCoSan;
        cuonChoGiaoHang = cuonDaDat - cuonCoSan;
    }

    double tongTienHang = cuonSanSangVanChuyen * 100.00;
    double tongPhiVanChuyen = cuonSanSangVanChuyen * phiMoiCuon;
    double tongDonHang = tongTienHang + tongPhiVanChuyen;

    cout << "Số cuộn dây sẵn sàng để vận chuyển từ tồn kho hiện tại: " << cuonSanSangVanChuyen << endl;
    cout << "Số cuộn dây đang chờ đợi giao hàng: " << cuonChoGiaoHang << endl;
    cout << "Tổng giá trị của phần sẵn sàng để vận chuyển: $" << tongTienHang << endl;
    cout << "Tổng chi phí vận chuyển và xử lý trên phần sẵn sàng để vận chuyển: $" << tongPhiVanChuyen << endl;
    cout << "Tổng giá trị của đơn hàng sẵn sàng để vận chuyển: $" << tongDonHang << endl;
}

int main() {
    int cuonDaDat, cuonCoSan;
    bool phiVanChuyenDacBiet;
    double phiMoiCuon;

    // Nhập số lượng cuộn đã đặt
    cout << "Nhập số lượng cuộn đã đặt: ";
    cin >> cuonDaDat;

    // Nhập số lượng cuộn có sẵn
    cout << "Nhập số lượng cuộn có sẵn: ";
    cin >> cuonCoSan;

    // Nhập thông tin về phí vận chuyển đặc biệt
    cout << "Có phí vận chuyển đặc biệt không? (1 cho có, 0 cho không): ";
    cin >> phiVanChuyenDacBiet;

    if (phiVanChuyenDacBiet) {
        cout << "Nhập phí vận chuyển đặc biệt cho mỗi cuộn: $";
        cin >> phiMoiCuon;
    }

    // Gọi hàm để hiển thị trạng thái đơn hàng
    hienThiTrangThaiDonHang(cuonDaDat, cuonCoSan, phiVanChuyenDacBiet, phiMoiCuon);

    return 0;
}

#include <iostream>
using namespace std;

// Hàm tính tổng chi phí cho bệnh nhân nội trú
double tinhTongChiPhiNoiTru(int soNgayNamVien, double giaNgay, double phiThuocBenhVien, double phiDichVu) {
    // Kiểm tra tính hợp lệ của đầu vào
    if (soNgayNamVien < 0 || giaNgay < 0.0 || phiThuocBenhVien < 0.0 || phiDichVu < 0.0) {
        return -1.0; // Đầu vào không hợp lệ, trả về -1 làm chỉ số lỗi
    }

    return (soNgayNamVien * giaNgay) + phiThuocBenhVien + phiDichVu;
}

// Hàm tính tổng chi phí cho bệnh nhân ngoại trú
double tinhTongChiPhiNgoaiTru(double phiThuocBenhVien, double phiDichVu) {
    // Kiểm tra tính hợp lệ của đầu vào
    if (phiThuocBenhVien < 0.0 || phiDichVu < 0.0) {
        return -1.0; // Đầu vào không hợp lệ, trả về -1 làm chỉ số lỗi
    }

    return phiThuocBenhVien + phiDichVu;
}

int main() {
    char loaiBenhNhan;
    int soNgayNamVien;
    double giaNgay, phiThuocBenhVien, phiDichVu;

    cout << "Bệnh nhân được nhập viện làm bệnh nhân nội trú (N) hay ngoại trú (O)? ";
    cin >> loaiBenhNhan;

    if (loaiBenhNhan == 'N' || loaiBenhNhan == 'n') {
        // Nhập dữ liệu cho bệnh nhân nội trú
        cout << "Nhập số ngày nằm viện: ";
        cin >> soNgayNamVien;
        cout << "Nhập giá ngày nằm viện: $";
        cin >> giaNgay;
        cout << "Nhập chi phí thuốc bệnh viện: $";
        cin >> phiThuocBenhVien;
        cout << "Nhập chi phí dịch vụ bệnh viện: $";
        cin >> phiDichVu;

        // Tính tổng chi phí cho bệnh nhân nội trú
        double tongChiPhi = tinhTongChiPhiNoiTru(soNgayNamVien, giaNgay, phiThuocBenhVien, phiDichVu);

        if (tongChiPhi < 0.0) {
            cout << "Đầu vào không hợp lệ. Vui lòng kiểm tra giá trị đã nhập." << endl;
        } else {
            cout << "Tổng chi phí cho bệnh nhân nội trú: $" << tongChiPhi << endl;
        }
    } else if (loaiBenhNhan == 'O' || loaiBenhNhan == 'o') {
        // Nhập dữ liệu cho bệnh nhân ngoại trú
        cout << "Nhập chi phí thuốc bệnh viện: $";
        cin >> phiThuocBenhVien;
        cout << "Nhập chi phí dịch vụ bệnh viện: $";
        cin >> phiDichVu;

        // Tính tổng chi phí cho bệnh nhân ngoại trú
        double tongChiPhi = tinhTongChiPhiNgoaiTru(phiThuocBenhVien, phiDichVu);

        if (tongChiPhi < 0.0) {
            cout << "Đầu vào không hợp lệ. Vui lòng kiểm tra giá trị đã nhập." << endl;
        } else {
            cout << "Tổng chi phí cho bệnh nhân ngoại trú: $" << tongChiPhi << endl;
        }
    } else {
        cout << "Loại bệnh nhân không hợp lệ. Vui lòng nhập 'N' cho nội trú hoặc 'O' cho ngoại trú." << endl;
    }

    return 0;
}

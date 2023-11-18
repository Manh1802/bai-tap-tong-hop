#include <iostream>
using namespace std;

int main() {
    int ma_so_nhan_vien;
    double luong_gross, thue_nha_nuoc, thue_federal, giau_tren_tien_FICA;
    
    double tong_luong_gross = 0.0;
    double tong_thue_nha_nuoc = 0.0;
    double tong_thue_federal = 0.0;
    double tong_giau_tren_tien_FICA = 0.0;
    
    cout << "Nhập thông tin nhân viên hoặc 0 để thoát." << endl;
    
    while (true) {
        cout << "Mã số nhân viên (0 để thoát): ";
        cin >> ma_so_nhan_vien;
        
        if (ma_so_nhan_vien == 0) {
            break; // Thoát khỏi vòng lặp nếu nhập 0 cho mã số nhân viên
        }
        
        cout << "Lương gross: $";
        cin >> luong_gross;
        
        // Kiểm tra đầu vào cho lương gross
        while (luong_gross < 0) {
            cout << "Vui lòng nhập lương gross không âm: $";
            cin >> luong_gross;
        }
        
        cout << "Thuế nhà nước: $";
        cin >> thue_nha_nuoc;
        
        // Kiểm tra đầu vào cho thuế nhà nước
        while (thue_nha_nuoc < 0 || thue_nha_nuoc > luong_gross) {
            cout << "Vui lòng nhập thuế nhà nước hợp lệ: $";
            cin >> thue_nha_nuoc;
        }
        
        cout << "Thuế federal: $";
        cin >> thue_federal;
        
        // Kiểm tra đầu vào cho thuế federal
        while (thue_federal < 0 || thue_federal > luong_gross) {
            cout << "Vui lòng nhập thuế federal hợp lệ: $";
            cin >> thue_federal;
        }
        
        cout << "Giữa trên tiền FICA: $";
        cin >> giau_tren_tien_FICA;
        
        // Kiểm tra đầu vào cho giữa trên tiền FICA
        while (giau_tren_tien_FICA < 0 || giau_tren_tien_FICA > luong_gross) {
            cout << "Vui lòng nhập giữa trên tiền FICA hợp lệ: $";
            cin >> giau_tren_tien_FICA;
        }
        
        // Kiểm tra nếu tổng thuế vượt quá lương gross
        if (thue_nha_nuoc + thue_federal + giau_tren_tien_FICA > luong_gross) {
            cout << "Lỗi: Tổng thuế vượt quá lương gross. Vui lòng nhập lại thông tin cho nhân viên " << ma_so_nhan_vien << endl;
            continue; // Bỏ qua việc nhập thông tin cho nhân viên này và tiếp tục với lần lặp tiếp theo
        }
        
        // Tính toán và tích lũy tổng
        tong_luong_gross += luong_gross;
        tong_thue_nha_nuoc += thue_nha_nuoc;
        tong_thue_federal += thue_federal;
        tong_giau_tren_tien_FICA += giau_tren_tien_FICA;
    }
    
    // Hiển thị báo cáo lương hàng tuần
    cout << "\nBáo Cáo Lương Hàng Tuần:" << endl;
    cout << "----------------------" << endl;
    cout << "Tổng Lương Gross: $" << tong_luong_gross << endl;
    cout << "Tổng Thuế Nhà Nước: $" << tong_thue_nha_nuoc << endl;
    cout << "Tổng Thuế Federal: $" << tong_thue_federal << endl;
    cout << "Tổng Giữa Trên Tiền FICA: $" << tong_giau_tren_tien_FICA << endl;
    cout << "Tổng Lương Net: $" << (tong_luong_gross - tong_thue_nha_nuoc - tong_thue_federal - tong_giau_tren_tien_FICA) << endl;

    return 0;
}

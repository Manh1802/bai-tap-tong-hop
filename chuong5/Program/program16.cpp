#include <iostream>
using namespace std;

int main() {
    double lai_suat_nam;
    double so_du_khoi_dau;
    int so_thang_da_qua;
    
    double so_du;
    double tong_goi_tien = 0.0;
    double tong_rut_tien = 0.0;
    double tong_lai_suat_earned = 0.0;
    
    cout << "Nhập lãi suất hàng năm (dưới dạng thập phân): ";
    cin >> lai_suat_nam;
    
    cout << "Nhập số dư khởi đầu: $";
    cin >> so_du_khoi_dau;
    
    cout << "Nhập số tháng đã trôi qua kể từ khi tài khoản được mở: ";
    cin >> so_thang_da_qua;
    
    so_du = so_du_khoi_dau;

    for (int thang = 1; thang <= so_thang_da_qua; thang++) {
        double tien_goi, tien_rut;
        
        cout << "Nhập số tiền gửi vào tài khoản trong tháng " << thang << ": $";
        cin >> tien_goi;
        
        // Kiểm tra đầu vào cho số tiền gửi
        while (tien_goi < 0) {
            cout << "Vui lòng nhập số tiền gửi không âm: $";
            cin >> tien_goi;
        }
        
        cout << "Nhập số tiền rút ra từ tài khoản trong tháng " << thang << ": $";
        cin >> tien_rut;
        
        // Kiểm tra đầu vào cho số tiền rút
        while (tien_rut < 0) {
            cout << "Vui lòng nhập số tiền rút không âm: $";
            cin >> tien_rut;
        }
        
        tong_goi_tien += tien_goi;
        tong_rut_tien += tien_rut;
        
        so_du += tien_goi - tien_rut;
        
        // Tính lãi suất hàng tháng
        double lai_suất_hàng_tháng = lai_suat_nam / 12;
        double lãi_suất_hàng_tháng = so_du * lai_suất_hàng_tháng;
        so_du += lãi_suất_hàng_tháng;
        tong_lai_suat_earned += lãi_suất_hàng_tháng;
    }
    
    // Hiển thị kết quả cuối cùng
    cout << "\nSố dư cuối cùng: $" << so_du << endl;
    cout << "Tổng số tiền gửi: $" << tong_goi_tien << endl;
    cout << "Tổng số tiền rút: $" << tong_rut_tien << endl;
    cout << "Tổng lãi suất kiếm được: $" << tong_lai_suat_earned << endl;

    return 0;
}

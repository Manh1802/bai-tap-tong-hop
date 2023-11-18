#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int main() {
    string tenTep;
    cout << "Nhập tên tệp: ";
    cin >> tenTep;

    // Mở tệp
    ifstream inputFile(tenTep);
    
    // Kiểm tra xem tệp mở thành công hay không
    if (!inputFile) {
        cout << "Lỗi khi mở tệp. Xin vui lòng kiểm tra tên tệp và thử lại.";
        return 1;
    }

    double so;
    double nhoNhat = numeric_limits<double>::max();  // Khởi tạo nhoNhat với giá trị tối đa có thể
    double lonNhat = numeric_limits<double>::min(); // Khởi tạo lonNhat với giá trị tối thiểu có thể
    double tong = 0;
    int dem = 0;

    // Đọc các số từ tệp và thực hiện các phép tính
    while (inputFile >> so) {
        // Cập nhật số nhỏ nhất và số lớn nhất
        if (so < nhoNhat) {
            nhoNhat = so;
        }
        if (so > lonNhat) {
            lonNhat = so;
        }

        tong += so;
        dem++;
    }

    // Đóng tệp
    inputFile.close();

    if (dem > 0) {
        double trungBinh = tong / dem;
        cout << "Số nhỏ nhất: " << nhoNhat << endl;
        cout << "Số lớn nhất: " << lonNhat << endl;
        cout << "Tổng: " << tong << endl;
        cout << "Trung bình: " << trungBinh << endl;
    } else {
        cout << "Không tìm thấy số trong tệp." << endl;
    }

    return 0;
}

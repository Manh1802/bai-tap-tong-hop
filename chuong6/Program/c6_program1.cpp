#include <iostream>
using namespace std;

// Hàm tính giá bán lẻ
float tinhGiaBanLe(float giaNhap, float tyLeMarkup) {
    if (giaNhap < 0 || tyLeMarkup < 0) {
        return -1;  // Kiểm tra giá trị đầu vào: Không chấp nhận giá trị âm
    }
    float giaBanLe = giaNhap * (1 + tyLeMarkup / 100);
    return giaBanLe;
}

int main() {
    try {
        // Nhập: Giá nhập và tỷ lệ markup
        float giaNhap;
        float tyLeMarkup;

        cout << "Nhập giá nhập của sản phẩm: $";
        cin >> giaNhap;
        cout << "Nhập tỷ lệ markup (ví dụ: 50 cho 50%): ";
        cin >> tyLeMarkup;

        // Tính giá bán lẻ bằng cách sử dụng hàm và hiển thị kết quả
        float giaBanLe = tinhGiaBanLe(giaNhap, tyLeMarkup);

        // Kiểm tra nếu kiểm tra giá trị đầu vào thất bại
        if (giaBanLe == -1) {
            cout << "Kiểm tra giá trị đầu vào thất bại. Xin hãy nhập giá trị không âm cho giá nhập và tỷ lệ markup." << endl;
        } else {
            // Hiển thị giá bán lẻ
            cout << "Giá bán lẻ của sản phẩm là: $" << giaBanLe << endl;
        }

    } catch (...) {
        cout << "Lỗi nhập xuất. Xin vui lòng nhập giá trị số hợp lệ cho giá nhập và tỷ lệ markup." << endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt");
    
    if (!inputFile) {
        cout << "Lỗi mở tệp." << endl;
        return 1; // Thoát với mã lỗi
    }
    
    int soNguyen;
    int tong = 0;
    int dem = 0;
    
    while (inputFile >> soNguyen) {
        tong += soNguyen;
        dem++;
    }
    
    inputFile.close();
    
    if (dem == 0) {
        cout << "Tệp trống." << endl;
    } else {
        double trungBinh = static_cast<double>(tong) / dem;
        
        cout << "Số lượng số trong tệp: " << dem << endl;
        cout << "Tổng của tất cả số trong tệp: " << tong << endl;
        cout << "Trung bình của tất cả số trong tệp: " << trungBinh << endl;
    }
    
    return 0;
}

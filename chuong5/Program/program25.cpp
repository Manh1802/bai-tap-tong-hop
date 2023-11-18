#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");

    if (!inputFile) {
        cout << "Lỗi mở tệp." << endl;
        return 1; // Thoát với mã lỗi
    }

    vector<string> tenSinhVien;
    string ten;

    while (getline(inputFile, ten)) {
        tenSinhVien.push_back(ten);
    }

    inputFile.close();

    if (tenSinhVien.empty()) {
        cout << "Không tìm thấy tên nào trong tệp." << endl;
    } else {
        cout << "Các tên trong tệp:" << endl;
        for (const string& n : tenSinhVien) {
            cout << n << endl;
        }
    }

    return 0;
}

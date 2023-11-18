#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int SO_NAM = 6;
    int nam[SO_NAM] = {1900, 1920, 1940, 1960, 1980, 2000};
    int dan_sos[SO_NAM];
    ifstream inputFile("People.txt");

    if (!inputFile) {
        cerr << "Lỗi mở tệp. Hãy đảm bảo tệp People.txt tồn tại." << endl;
        return 1;
    }

    // Đọc dữ liệu dân số từ tệp
    for (int i = 0; i < SO_NAM; i++) {
        inputFile >> dan_sos[i];
        dan_sos[i] = (dan_sos[i] + 500) / 1000; // Làm tròn đến ngàn gần nhất
    }

    // Hiển thị biểu đồ cột
    cout << "SỰ TĂNG TRƯỞNG DÂN SỐ PRAIRIEVILLE" << endl;
    cout << "(mỗi * biểu thị 1.000 người)" << endl;

    for (int i = 0; i < SO_NAM; i++) {
        cout << nam[i] << " ";
        for (int j = 0; j < dan_sos[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close();
    return 0;
}

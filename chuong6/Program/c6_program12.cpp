#include <iostream>
using namespace std;

// Hàm để lấy điểm của một giám khảo và kiểm tra tính hợp lệ
void getJudgeData(double &diem) {
    do {
        cout << "Nhập điểm của một giám khảo (0-10): ";
        cin >> diem;
        if (diem < 0 || diem > 10) {
            cout << "Điểm không hợp lệ. Vui lòng nhập điểm từ 0 đến 10." << endl;
        }
    } while (diem < 0 || diem > 10);
}

// Hàm để tìm điểm thấp nhất
int findLowest(double diem[]) {
    int chiSoThapNhat = 0;
    for (int i = 1; i < 5; i++) {
        if (diem[i] < diem[chiSoThapNhat]) {
            chiSoThapNhat = i;
        }
    }
    return chiSoThapNhat;
}

// Hàm để tìm điểm cao nhất
int findHighest(double diem[]) {
    int chiSoCaoNhat = 0;
    for (int i = 1; i < 5; i++) {
        if (diem[i] > diem[chiSoCaoNhat]) {
            chiSoCaoNhat = i;
        }
    }
    return chiSoCaoNhat;
}

// Hàm để tính và hiển thị điểm của thí sinh
void calcScore(double diem[]) {
    int chiSoThapNhat = findLowest(diem);
    int chiSoCaoNhat = findHighest(diem);

    double tongDiem = 0;
    for (int i = 0; i < 5; i++) {
        if (i != chiSoThapNhat && i != chiSoCaoNhat) {
            tongDiem += diem[i];
        }
    }

    double diemTrungBinh = tongDiem / 3;
    cout << "Điểm của thí sinh sau khi loại bỏ điểm cao nhất và điểm thấp nhất là: " << diemTrungBinh << endl;
}

int main() {
    double diem[5];

    // Nhập năm điểm của năm giám khảo
    for (int i = 0; i < 5; i++) {
        getJudgeData(diem[i]);
    }

    // Tính và hiển thị điểm của thí sinh
    calcScore(diem);

    return 0;
}

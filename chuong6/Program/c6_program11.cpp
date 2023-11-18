#include <iostream>
using namespace std;

// Hàm để nhập điểm kiểm tra và kiểm tra tính hợp lệ
void getScore(double &score) {
    do {
        cout << "Nhập điểm kiểm tra (0-100): ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Điểm không hợp lệ. Vui lòng nhập điểm từ 0 đến 100." << endl;
        }
    } while (score < 0 || score > 100);
}

// Hàm để tìm điểm thấp nhất
int findLowest(double scores[]) {
    int lowestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (scores[i] < scores[lowestIndex]) {
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

// Hàm để tính và hiển thị điểm trung bình của bốn điểm cao nhất
void calcAverage(double scores[]) {
    int lowestIndex = findLowest(scores);

    double sum = 0;
    for (int i = 0; i < 5; i++) {
        if (i != lowestIndex) {
            sum += scores[i];
        }
    }

    double average = sum / 4;
    cout << "Điểm trung bình của bốn điểm cao nhất là: " << average << endl;
}

int main() {
    double scores[5];

    // Nhập năm điểm kiểm tra
    for (int i = 0; i < 5; i++) {
        getScore(scores[i]);
    }

    // Tính toán và hiển thị điểm trung bình của bốn điểm cao nhất
    calcAverage(scores);

    return 0;
}

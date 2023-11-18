#include <iostream>
#include <string>
using namespace std;

// Hàm để lấy số lượng vụ tai nạn xe hơi cho một khu vực
int getNumAccidents(const string& tenKhuVuc) {
    int soTaiNan;
    do {
        cout << "Nhập số lượng vụ tai nạn xe hơi được báo cáo trong khu vực " << tenKhuVuc << " trong năm ngoái: ";
        cin >> soTaiNan;
        if (soTaiNan < 0) {
            cout << "Số lượng tai nạn không thể nhỏ hơn 0. Xin vui lòng nhập một số hợp lệ." << endl;
        }
    } while (soTaiNan < 0);
    return soTaiNan;
}

// Hàm để tìm khu vực có ít vụ tai nạn nhất
void timKhuVucItTaiNan(int taiNanBac, int taiNanNam, int taiNanDong, int taiNanTay, int taiNanTrungTam) {
    int taiNanNhoNhat = taiNanBac;
    string khuVucNhoNhat = "Bắc";

    if (taiNanNam < taiNanNhoNhat) {
        taiNanNhoNhat = taiNanNam;
        khuVucNhoNhat = "Nam";
    }
    if (taiNanDong < taiNanNhoNhat) {
        taiNanNhoNhat = taiNanDong;
        khuVucNhoNhat = "Đông";
    }
    if (taiNanTay < taiNanNhoNhat) {
        taiNanNhoNhat = taiNanTay;
        khuVucNhoNhat = "Tây";
    }
    if (taiNanTrungTam < taiNanNhoNhat) {
        taiNanNhoNhat = taiNanTrungTam;
        khuVucNhoNhat = "Trung tâm";
    }

    cout << "Khu vực có ít vụ tai nạn xe hơi được báo cáo nhất là khu vực " << khuVucNhoNhat << " với " << taiNanNhoNhat << " vụ tai nạn." << endl;
}

int main() {
    // Lấy số lượng tai nạn cho mỗi khu vực
    int taiNanBac = getNumAccidents("Bắc");
    int taiNanNam = getNumAccidents("Nam");
    int taiNanDong = getNumAccidents("Đông");
    int taiNanTay = getNumAccidents("Tây");
    int taiNanTrungTam = getNumAccidents("Trung tâm");

    // Tìm và hiển thị khu vực có ít vụ tai nạn nhất
    timKhuVucItTaiNan(taiNanBac, taiNanNam, taiNanDong, taiNanTay, taiNanTrungTam);

    return 0;
}

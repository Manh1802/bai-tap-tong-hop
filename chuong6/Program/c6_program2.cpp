#include <iostream>
using namespace std;

// Hàm để lấy chiều dài của hình chữ nhật từ người dùng
double getLength() {
    double length;
    cout << "Nhập chiều dài của hình chữ nhật: ";
    cin >> length;
    return length;
}

// Hàm để lấy chiều rộng của hình chữ nhật từ người dùng
double getWidth() {
    double width;
    cout << "Nhập chiều rộng của hình chữ nhật: ";
    cin >> width;
    return width;
}

// Hàm để tính diện tích của hình chữ nhật
double getArea(double length, double width) {
    return length * width;
}

// Hàm để hiển thị thông tin của hình chữ nhật
void displayData(double length, double width, double area) {
    cout << "Chiều dài của hình chữ nhật: " << length << endl;
    cout << "Chiều rộng của hình chữ nhật: " << width << endl;
    cout << "Diện tích của hình chữ nhật: " << area << endl;
}

int main() {
    double length, width, area;

    // Lấy kích thước của hình chữ nhật từ người dùng
    length = getLength();
    width = getWidth();

    // Tính diện tích
    area = getArea(length, width);

    // Hiển thị thông tin
    displayData(length, width, area);

    return 0;
}

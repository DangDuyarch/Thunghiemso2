#include <iostream>
#include <string>

using namespace std;

// Định nghĩa struct SinhVien
struct SinhVien {
    string hoTen;
    string maSo;
    float diemGPA;
};

int main() {
    // 1. Tạo (khởi tạo) một biến sv1 kiểu SinhVien
    SinhVien sv1;
    sv1.hoTen = "Dang Van Duy";
    sv1.maSo = "202XXXXX"; // Thay mã số của bạn vào đây nhé
    sv1.diemGPA = 3.6;

    // 2. In thông tin ra màn hình
    cout << "--- Thong tin sinh vien ---" << endl;
    cout << "Ho ten: " << sv1.hoTen << endl;
    cout << "MSSV: " << sv1.maSo << endl;
    cout << "Diem GPA: " << sv1.diemGPA << endl;

    return 0;
}
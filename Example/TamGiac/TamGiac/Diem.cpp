#include "Diem.h"

/* Cú pháp cài đặt phương thức: <Kiểu dữ liệu> <Tên đối tượng>::<Tên phương thức>(<Danh sách tham số nếu có>) */

void Diem::NhapDiem() {
	cout << "\n Nhap hoang do: ";
	cin >> HoanhDo;

	cout << "\n Nhap tung do: ";
	cin >> TungDo;

}

void Diem::XuatDiem() {

	cout << "(" << HoanhDo << " , " << TungDo << ")";

}

float Diem::TinhKhoangCach(Diem dest) {
	return sqrt(pow(this->HoanhDo - dest.HoanhDo, 2) + pow(this->TungDo - dest.TungDo, 2));
}

Diem::Diem()
{

}


Diem::~Diem()
{
}

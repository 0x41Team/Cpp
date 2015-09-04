#include "Diem.h";

void main() {

	// Sử dụng con trỏ
	Diem *b = new Diem;

	b->NhapDiem();
	b->XuatDiem();


	Diem a;
	a.NhapDiem();
	a.XuatDiem();

	float KhoangCach = a.TinhKhoangCach(*b);

	cout << "Khoang cach giua 2 diem A va B la: " << KhoangCach;
	
	system("pause");
}
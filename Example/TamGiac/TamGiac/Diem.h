#pragma once

#ifndef DIEM
#define DIEM

#include <iostream>
using namespace std;

class Diem
{
private:
	float HoanhDo, TungDo;
	
public:
	void NhapDiem();

	void XuatDiem();

	float TinhKhoangCach(Diem);

	Diem();
	~Diem();
};

#endif DIEM

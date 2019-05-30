// feet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CFeet
{
private:
	int Ft;
	int In;
	int check();
public:
	CFeet();
	int SetData(int f, int i);
	void disPlayFeet();
	void addData();
	CFeet operator +(CFeet &ot);
};
CFeet CFeet::operator+(CFeet &ot)
{
	CFeet temp;
	temp.SetData(Ft + ot.Ft, In + ot.In);
	return temp;
}
CFeet::CFeet()
{
	Ft = 0;
	In = 0;
}
int CFeet::SetData(int f, int i)
{
	Ft = f;
	In = i;
	check();
	return 0;
}
int CFeet::check()
{
	int temp = 1;
	if (In >= 12)
	{
		 Ft = Ft + In / 12;
		 In = In % 12;
		temp = 1;
	}
	return 0;
}
void CFeet::addData()
{
	if (In >= 12)
	{
		Ft = Ft + In / 12;
		In = In % 12;
	}
}
void CFeet::disPlayFeet()
{
	cout << Ft << "英尺" << In << "英寸" << endl;
}
int main()
{
	CFeet od1,od2,od3;
	od1.SetData(1, 13);
	od2.SetData(1, 13);
	od3 = od1 + od2;
	od3.disPlayFeet();
	return 0;
}


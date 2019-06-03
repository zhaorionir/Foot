// ConsoleApplication foot.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class cFeet
{
public:
	cFeet(double x = 0.0, double y = 0.0) :real(12), imag(12){}
	void disPlay();
	cFeet operator*(const cFeet&c1)const;
	cFeet operator/(const cFeet&c2)const;
private:
	double real;
	double imag;
};

cFeet cFeet::operator*(const cFeet&c1)const
{
	return cFeet(c1 *c1.real);
}
cFeet cFeet::operator/(const cFeet&c2)const
{
	return cFeet( c2 /c2.imag);
}
void cFeet::disPlay()
{
	cout << "x=" << real<< "y=" << imag << endl;

}
int main()
{
	cFeet c1(12,12),c2(13,13), c3;
	cout << "c1="; c1.disPlay();
	cout << "c2="; c2.disPlay();
	c3 = c1*12;
	//cFeet operator*(const cFeet&c1);
	void disPlay();
	//cFeet operator/(const cFeet&c2);
	//void disPlay();
    return 0;
}


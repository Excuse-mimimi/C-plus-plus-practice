// 2017_8_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double power(double b, int n);
int main()
{
	int val = 0;
	cout << "Enter an 8 bits binary number: " << endl;
	int ch = 0;
	for (int i = 7; i >=0; --i) {
		cin >> ch;
		if(ch)
			val +=static_cast<int>(power(2, i));
	}
	cout << val << endl;
    return 0;
}
double power(double b, int n) {
	double val = 1.0;
	while (n--) 
		val *= b;
	return val;
}

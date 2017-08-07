// 2017_8_7_02计算分段函数的值.cpp : 定义控制台应用程序的入口点。
//
/*
	时间：2017年8月7日13:30:30
	程序功能：计算一个分段函数的值
*/
#include "stdafx.h"
#include <iostream>
#include <cmath>
const double TINY_VALUE = 10e-10;
using namespace std;
double my_sin(double x) {
	double result = 0.0;
	double e = x, sqr = x*x, i = 1, t = 0.0;
	int j = 1;
	while (fabs(t = e / i )> TINY_VALUE) {
		result += t ;
		e *= -sqr;// 这里加一个负号就不需要每次判断是加还是减去某一项了，但是精度判断必须用绝对值
		j += 2;
		i *= (j - 1)*j;
	}
	return result;
}
int main()
{
	double k, r, s;
	cout << "Enter r:" ;
	cin >> r;
	cout << "Enter s:" ;
	cin >> s;
	if (r*r <= s*s)
		k = sqrt(my_sin(r)*my_sin(r) + my_sin(s)*my_sin(s));
	else
		k = 0.5*my_sin(r*s);
	cout << "k =" << k << endl;
    return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
Enter r:5
Enter s:8
k =1.37781
---------------------------------------------
*/


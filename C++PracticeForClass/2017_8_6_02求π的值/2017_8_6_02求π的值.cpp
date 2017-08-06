// 2017_8_6_02求π的值.cpp : 定义控制台应用程序的入口点。
//
/*
	时间：2017年8月6日21:44:26
	程序功能：近似计算π的值
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
double arctan(double x);
//删除：double power(double b, int n);
//求arctan的函数
double arctan(double x) {
	double val = 0.0;
	int i = 1;
	/*删除：
	while (pow(x, i) / i >= 10E-5) {
		val += pow(x, i) / i*pow(-1, i);
		i += 2;
	}*/
	//不推荐使用求n次方的方法来计算x的i次方，而是使用下面的方法
	double e, sqr;
	e = x;
	sqr = x*x;
	while (e / i > 10e-5) {		//计算不可能永久进行下去，若某一项不大于10e-5，则舍去
		val = (i % 4 == 1) ? val + e / i : val - e / i;
		e = e*sqr;
		i = i + 2;
	}
	return val;
}
//求b的n（正整数）次方
//本次实验中不使用
/*删除：
double power(double b, int n) {
	double pow = 1.0;
	while (n--) { 
		pow *= b;
	}
	return pow;
}
*/
int main()
{
	double Pi;
	//这里使用1/5.0是因为整数1/5的结果为0
	Pi = 16 * arctan(1 / 5.0) - 4 * arctan(1 / 239.0);
	cout << "The value of π is ： " << Pi << endl;
    return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
The value of π is ： 3.1406
---------------------------------------------
*/
/*
程序思路：
	本程序使用以下公式对π进行计算：
		1. π的计算公式：
			Pi = 16 * arctan(1 / 5.0) - 4 * arctan(1 / 239.0)
		2. arctan(x)的计算公式（级数）：
			arctan(x)=x-(x^3)/3+(x^5)/5+……+(x^(2*n+1))/(2*n+1)+o(x^(2*n)+1)
		3. 级数某项不大于10e-5时，舍去

*/
/*
总结教训：
	1. 当在程序中多次出现类似求arctan（x）时多次使用的x^i时，不要使用求n次方函数
	对每一个x^i计算，因为这重复了很多不必要的计算，使用本次程序中的方法。
	2.注意整数之间相除的值依然为整数，即使结果经过强制转换为浮点数，依然只有整数部分。

*/
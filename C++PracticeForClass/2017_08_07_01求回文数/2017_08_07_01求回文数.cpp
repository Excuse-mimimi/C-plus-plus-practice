// 2017_8_7_01求回文数.cpp : 定义控制台应用程序的入口点。
//
/*
	时间：2017年8月7日12:03:18
	程序功能：寻找11到11~999之间的数m，满足m、m^2和m^3均为回文数。
			回文数：各位数字左右对称的整数。
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
bool symm(unsigned  m);
//判断一个大于10小于10e6的整数是否为回文数
bool symm(unsigned  m) {
	//创建一个存放每一位系数的数组，a[0]存位数
	unsigned a[8] = {0};
	unsigned i = 1;
	while (m) {
		++a[0];
		a[a[0]] = m % 10;
		m /= 10;
	}
	for (int i = 1, j = a[0]; j > i; ++i, --j) {
		if (a[i] != a[j]) return false;
	}
	return true;
}
//另一种判断回文数的函数
//这种方法比起上述方法，不需要对输入的数的位数进行判断
bool symm2(unsigned m){
	unsigned i = m, n = 0;
	//将m翻转（高位变低位），存入n中
	while (i) {
		n = n * 10 + i % 10;
		i /= 10;
	}
	if (m == n) return true;
	else return false;
}
int  main()
{
	cout <<"11到11~999之间的数m，满足m、m^2和m^3均为回文数的数有："<<endl;
	unsigned  m = 11;
	while (m != 1000) {
		if (symm(m) && symm(m*m) && symm(m*m*m))
			cout << m << endl;
		++m;
	}
    return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
11到11~999之间的数m，满足m、m^2和m^3均为回文数的数有：
11
101
111
---------------------------------------------
*/
/*
结论教训：
	1. symm2比symm1兼容性更好
*/

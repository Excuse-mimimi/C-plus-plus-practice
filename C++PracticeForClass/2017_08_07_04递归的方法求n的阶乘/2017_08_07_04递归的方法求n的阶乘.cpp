// 2017_8_7_04递归的方法求n的阶乘.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//factorial：adj.因子的，阶乘的; n.阶乘积，阶乘;
//递归的方法求阶乘
unsigned my_fac1(unsigned n) {
	unsigned long long result = 1;
	if (n == 0)			//这里只有n==0，如果写成n==0||n==1则需要在每次递归时多判断一个条件，不划算
		result = 1;
	else
		result = n*my_fac1(n - 1);
	return result;
}

int main()
{
	unsigned n = 0;
	cout << "Enter n: ";
	unsigned long long value{ 0 };
	cin >> n;
	value = my_fac1(n);
	cout << "The factorial of n is :" << value << endl;
    return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
Enter n: 5
The factorial of n is :120
---------------------------------------------
*/

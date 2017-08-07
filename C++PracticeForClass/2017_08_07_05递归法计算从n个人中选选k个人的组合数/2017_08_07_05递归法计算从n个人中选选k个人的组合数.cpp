// 2017_8_7_05递归法计算从n个人中选选k个人的组合数.cpp : 定义控制台应用程序的入口点。
//
/*
	时间：2017年8月7日17:46:08
	程序功能：使用递归的方法计算从n个人中选选k个人组成一个委员会的不同组合数。
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
int comm(int n, int k) {
	int value = 0;
	if (n < k) return 0;	//无方案
	else if (n == k || k == 0)
		value = 1;
	else value = comm(n - 1, k - 1) + comm(n - 1, k);
	return value;

}

int main()
{
	int n, k;
	cin >> n >> k;
	if (n<= 0||k<0){
		cout << "error" << endl; return 0;
	}

	int result = comm(n, k);
	cout << result << endl;
    return 0;
}
/*在visual studio 2017中的运行结果为：
---------------------------------------------
18 5
8568
---------------------------------------------
*/
/*
	当n = k或k = 0时，组合数为1。
	由n个人选k个人：
		假设第1个人被选中，那么就要从其余n-1个人里选k-1个人，有C(n-1,k-1)种选法；
		假设第1个人没被选中，那么就要从其余n-1个人里选k个人，有C(n-1,k)种选法；
	因此，由n个人里选k个人的组合数= 由n-1个人里选k个人的组合数+由n-1个人里选k-1个人的组合数。
*/
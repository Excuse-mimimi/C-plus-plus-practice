// 2017_8_7_06汉诺塔问题.cpp : 定义控制台应用程序的入口点。
//
/*
	时间：2017年8月7日22:01:03
	程序功能：求解汉诺塔问题
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
void hanoi_move(char src, char dest) {		//source ,destination
	cout << src << "-->" << dest << endl;
}
void hanoi(int num, char src, char dest, char medium) {
	if (num == 1) 
		hanoi_move(src, dest);
	else {
		hanoi(num - 1, src, medium, dest);
		hanoi_move(src, dest);
		hanoi(num - 1, medium, dest, src);
	}
}

int main()
{
	int num;
	cout << "Enter the number of plate：";
	cin >> num;
	hanoi(num, 'A', 'B', 'C');
    return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
Enter the number of plate：5
A-->B
A-->C
B-->C
A-->B
C-->A
C-->B
A-->B
A-->C
B-->C
B-->A
C-->A
B-->C
A-->B
A-->C
B-->C
A-->B
C-->A
C-->B
A-->B
C-->A
B-->C
B-->A
C-->A
C-->B
A-->B
A-->C
B-->C
A-->B
C-->A
C-->B
A-->B
---------------------------------------------	
*/
/*
总结：
	1. 移动的次数为2^num-1
	2.
*/

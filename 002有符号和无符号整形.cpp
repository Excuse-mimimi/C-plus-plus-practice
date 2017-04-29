/*
练习类型：C++primer5 
时间：2017年4月29日23:39:00
程序功能：使用IO库，练习无符号数和有符号数的计算，p35
*/
#include <iostream>
int main() {
	unsigned int u = 10, u2 = 42;
	std::cout << u-u2 << std::endl;		//4294967264
	std::cout << u2-u << std::endl;		//32
	int i = 10, i2 = 42;
	std::cout << i2-i << std::endl;		//32
	std::cout << i-i2 << std::endl;		//-32
	std::cout << i-u << std::endl;		//0	
	std::cout << u-i << std::endl;		//0
	return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
4294967264
32
32
-32
0
0
---------------------------------------------
与我猜测的一样
*/
/*
��ϰ���ͣ�C++primer5 
ʱ�䣺2017��4��29��23:39:00
�����ܣ�ʹ��IO�⣬��ϰ�޷��������з������ļ��㣬p35
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
��visual studio 2017�е����н��Ϊ��
---------------------------------------------
4294967264
32
32
-32
0
0
---------------------------------------------
���Ҳ²��һ��
*/
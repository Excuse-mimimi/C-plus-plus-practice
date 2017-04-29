/*
练习类型：C++primer5 Page6
时间：2017年4月29日22:22:03
程序功能：使用IO库，输入两个数，返回这两个数的和
*/
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;		//向流（stream）写入数据
	int v1 = 0, v2 = 0;									
	std::cin >> v1 >> v2;								//从流读取数据
	std::cout << "The sum of " << v1 << " and " << v2   //注意“<<”和“>>”的前后空格
		<< " is " << v1 + v2 << std::endl;
	return 0;
}
/*
在visual studio 2017中的运行结果为：
-----------------------------------
Enter two numbers:
25 32
The sum of 25 and 32 is 57
-----------------------------------
*/
/*
要点：
1.
	输出运算符 << ，左侧必须为ostream对象，右侧为要打印的值。
	此运算返回其左侧运算对象作为计算结果，如下所示。
2.
	std::cout << "Enter two numbers:" << std::endl;
	等价于
	(std::cout << "Enter two numbers:") << std::endl;
	等价于
	std::cout << "Enter two numbers:" ;
	std::cout << std::endl;

3.
	前缀std::指cout和cin是定义在名为std的命名空间（namespace）中的，命名空间可以帮助避免名字定义冲突以及库中
	相同名字带来的冲突。
	:: 是作用域运算符
4.
	endl是一个特殊值，是一个操作符，效果是结束当前行，并将与设备关联的缓冲区（buffer）中的内容刷到设备中。
5.
	流（stream）：一个流就是一个字符序列，是从IO设备读出或写入IO设备的。
6.
	输入运算符 >> ，左侧为istream对象，右侧为要接受该istream值的对象。
	此运算返回其左侧运算对象作为计算结果，如下所示。
7.
	std::cin >> v1 >> v2;
	等价于
	（std::cin >> v1 ）>> v2;
	等价于
	std::cin >> v1;
	std::cin >> v2;

*/
/*
问题：下列代码合法吗？
	std::cout << "The sum of " << v1 ；
		<< " and " << v2；
		<< " is " << v1 + v2 << std::endl;
答案：不合法，因为 << 输出运算符左侧必须为一个ostream对象
*/
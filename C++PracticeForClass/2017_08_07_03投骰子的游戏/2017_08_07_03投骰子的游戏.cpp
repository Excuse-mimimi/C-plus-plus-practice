// 2017_8_7_03投骰子的游戏.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
//void srand(unsigned int seed);
enum GameStatus { WIN, LOSE, PLAYING };
int roll_dice(void) {
	int r1 = 1 + rand() % 6;			//rand()%6是0~5
	int r2 = 1 + rand() % 6;
	int sum = r1 + r2;
	cout << "player rolled ： " << r1 << "+" << r2 << "=" << sum << endl;
	return sum;
}
int main()
{
	int roll_dice();
	unsigned seed;
	cout << "Enter seed: ";
	cin >> seed;
	srand(seed);
	GameStatus status;
	int point = 0, sum = roll_dice();
	switch (sum) {
	case 7:
	case 11:
		status = WIN;
		break;
	case 2:
	case 3:
	case 12:
		status = LOSE;
		break;
	default:
		status = PLAYING;
		point = sum;
		cout << "player's point is :" << point << endl;
	}
	while (status == PLAYING) {
		sum = roll_dice();
		if (sum == 7)
			status = LOSE;
		else if (sum == point)
			status = WIN;
	}
	if (status == WIN)
		cout << "player win" << endl;
	else
		cout << "player lose" << endl;
    return 0;
}
/*
在visual studio 2017中的运行结果为：
---------------------------------------------
Enter seed: 10
player rolled ： 6+4=10
player's point is :10
player rolled ： 3+3=6
player rolled ： 6+3=9
player rolled ： 3+1=4
player rolled ： 3+4=7
player lose
---------------------------------------------
*/
/*投骰子的随机游戏：
	每个骰子有六面，点数分别为1、2、3、4、5、6。游戏者在程序开始时输入一个无符号整数，
作为产生随机数的种子。
	每轮投两次骰子，第一轮如果和数为7或11则为胜，游戏结束；和数为2、3或12则为负，游戏
结束；和数为其它值则将此值作为自己的点数，继续第二轮、第三轮...直到某轮的和数等于点数
则取胜，若在此前出现和数为7则为负。
	dice：美[daɪs]
		n.	骰子; 掷骰游戏;
		v.	将…切成丁;
*/
/*
rand函数：
	函数原型：int rand(void)；
	所需头文件：<cstdlib>
	功能和返回值：求出并返回一个伪随机数
	因为rand的内部实现是用线性同余法做的，他不是真的随机数，只不过是因为其周期特别长，
所以有一定的范围里可看成是随机的，rand()会返回一随机数值，范围在0至RAND_MAX 间。
在调用此函数产生随机数前，必须先利用srand()设好随机数种子，如果未设随机数种子，rand()在
调用时会自动设随机数种子为1。rand()产生的是假随机数字，每次执行时是相同的。若要不同,以
不同的值来初始化它.初始化的函数就是srand()。RAND_MAX的范围最少是在32767之间（int），即双
字节（16位数）。若用unsigned int 双字节是65535，四字节是4294967295的整数范围。
srand函数：
	void srand(unsigned int seed);
	参数：seed产生随机数的种子
	所需头文件：<cstdlib>
	功能：为使rand()产生一序列伪随机整数而设置起始点。使用1作为seed参数，可以重新初化rand()。
*/
/*

*/

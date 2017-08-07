// 2017_08_07_07带默认参数的函数求长方体的体积.cpp : 定义控制台应用程序的入口点。
//
/*
	时间：2017年8月7日22:22:11
	程序功能 ：求长方体体积
*/
#include "stdafx.h"
#include <iostream>
//I/O流控制头文件
#include <iomanip>		//manip是manipulator（操纵器）的缩写
using namespace std;
int  get_volume(int length, int width = 2, int height = 3);
int main()
{
	cout << "Some box data is ";
	//get_volume(10,,5)is illegal
	cout << get_volume(10, 5) << endl;
/*	cout << "Some box data is ";
	cout << "Some box data is ";*/
    return 0;
}
int get_volume(int length, int width, int height) {
	int volume = length*width*height;
	//setw(5)只能作用于紧跟着它的输出
	cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
	return length*width*height;
}
/*
经验教训：
	1. get_volume(10,,5)is illegal
*/

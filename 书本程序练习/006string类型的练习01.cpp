/*
练习类型：C++primer5  string对象学习练习
时间：2017年6月17日13:47:59
程序功能：string对象练习01
*/
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
//不要使用using namespace std;
int main() 
{
	//测试初始化的几种方式
	cout << "初始化测试" << endl;
	string s;				//默认初始化，s是一个空串
	cout << s << endl;
	string s1("hello");		//直接初始化
	cout << s1 << endl;
	string s2(s1);			//直接初始化，不使用等号的是直接初始化
	cout << s2 << endl;		
	string s3 = "excuse";	//拷贝初始化,使用等号初始化的都是拷贝初始化
	cout << s3 << endl;
	string s4 = s1;			//拷贝初始化
	cout << s4 << endl;	
	string s5(5,'b');		//直接初始化，s5内容是bbbbb
	cout << s5 << endl;
	//下面是赋值方式测试
	cout << "---------" << endl;
	cout << "赋值测试" << endl;
	s = s3;
	cout << s << endl;
	s = "me";				//用字符串字面值给string对象赋值是可行的
	cout << s << endl;
	//下面是string对象的比较，以及+的使用
	//+是string对象可以进行的操作，但字符串字面值与string是不同的类型
	//因此必须确保每个加法运算符两侧的对象至少有一个是string
	cout << "--------" << endl;
	cout << "比较string对象,以及+的使用" << endl;
	s1 = "0";
	s2 = "1";
	s3 = "a";
	s4 = "A";
	s5 = "B";
	if (s1 > s2) cout<<s1+">"+s2<<endl;
	else cout << s1+ ">"+s2 << endl;
	if (s3 > s4) cout << s3 + ">" + s4 << endl;
	else cout << s3 + ">" + s4 << endl;
	if (s4 > s5) cout << s4 + ">" + s5 << endl;
	else cout << s4 + ">" + s5 << endl;
	cout << s1 + s2 + s3 + s4 + s5 << endl;
	cout << "测试可否使用\\n取代std::endl----可以\n";  //可以
	//读取练习
	/*在输入“yes rpg”之后，下面的getline不经等待再次输入直接就读取了剩下的“rpg“，
	经测试只输入一个yes，getline也会直接读取一个空字符串。
	这是因为输入结束后我们敲击回车将“\n”留在cin中，而getline则会因为换行符的存在
	不再等待再次输入直接将剩下的字符输入（换行符被丢弃）
	*/
	cout << "--------" << endl;
	cout << "读取练习1，混用失败" << endl;
	cin >> s1;				
	cout << s1 << "      //cin >> s1;" << endl;
	getline(cin,s2);		
	cout << s2 <<"       //getline(cin,s2)"<< endl;
	//下面是正确的cin与getline混用方式
	cout <<"读取练习2，混用成功"<<endl;
	cin >> s1;
	cout << s1 << "      //cin >> s1;" << endl;
	cin.ignore(1024,'\n');		
	/*使用“cin.ignore()”可以清除以回车结束的输入缓冲区的内容,
	消除上一次输入对下一次输入的影响,cin.ignore用法：从输入流（cin）中提取字符，
	提取的字符被忽略（ignore），不被使用。每抛弃一个字符，它都要计数和比较字符：
	如果计数值达到a或者被抛弃的字符是ch，则cin.ignore()函数执行终止；否则，
	它继续等待。如果cin.ignore()不给参数，则默认参数为cin.ignore(1,EOF)，
	即把EOF前的1个字符清掉，没有遇到EOF就清掉一个字符然后结束，会导致不正确的结果，
	因为EOF是文件结束标识。*/
	getline(cin, s2);
	cout << s2 << "       //getline(cin,s2)" << endl;
	//下面是string的enpty和size操作
	cout << "--------" << endl;
	cout << "string的enpty和size操作" << endl;
	if (!s2.empty())
		cout << "s2非空" << endl;
	auto s2_size = s2.size();	//此处的s2_size是string::size_type类型的，无符号整数
	cout << s2_size << endl;
	return 0;
}
/***********
在visual studio 2017中的运行结果为：
---------------------------------------------
初始化测试

hello
hello
excuse
hello
bbbbb
---------
赋值测试
excuse
me
--------
比较string对象,以及+的使用
0>1
a>A
A>B
01aAB
测试可否使用\n取代std::endl----可以
--------
读取练习1，混用失败
Yes RPG
Yes      //cin >> s1;
RPG        //getline(cin,s2)
读取练习2，混用成功
Yes RPG
Yes      //cin >> s1;
YEs RPG
YEs RPG       //getline(cin,s2)
--------
string的enpty和size操作
s2非空
7
---------------------------------------------
**********/
/*
要点：
1.	不要使用`using namespace std;`这样很容易在复杂程序中因为起名字而出错。
2.	string对象可以相加，+是string对象可以进行的操作，但字符串字面值与string是
不同的类型因此必须确保每个加法运算符两侧的对象至少有一个是string。
3.   cin>>与getline（cin,s）输入混用时应谨慎当我们使用cin>>输入一串字符（即使
字符串中间、结尾没有任何空白符），我们最后敲击回车来完成输入，这样会在字符串最
后留下一个换行符（\\n）,由于换行符的存在，getline()会不等待再次输入直接将cin>>
输入后剩下的字符串直接输入到string对象s中（换行符被丢弃）。可以使用“cin.ignore()”
清除以回车结束的输入缓冲区的内容,消除上一次输入对下一次输入的影响.
4.	cin.ignore(a,ch);用法：从输入流（cin）中提取字符，提取的字符被忽略（ignore），
不被使用。每抛弃一个字符，它都要计数和比较字符：如果计数值达到a或者被抛弃的字符
是ch，则cin.ignore()函数执行终止；否则，它继续等待。如果cin.ignore()不给参数，则
默认参数为cin.ignore(1,EOF)，即把EOF前的1个字符清掉，没有遇到EOF就清掉一个字符然
后结束，会导致不正确的结果，因为EOF是文件结束标识。
*/
/*
��ϰ���ͣ�C++primer5  string����ѧϰ��ϰ
ʱ�䣺2017��6��17��13:47:59
�����ܣ�string������ϰ01
*/
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
//��Ҫʹ��using namespace std;
int main() 
{
	//���Գ�ʼ���ļ��ַ�ʽ
	cout << "��ʼ������" << endl;
	string s;				//Ĭ�ϳ�ʼ����s��һ���մ�
	cout << s << endl;
	string s1("hello");		//ֱ�ӳ�ʼ��
	cout << s1 << endl;
	string s2(s1);			//ֱ�ӳ�ʼ������ʹ�õȺŵ���ֱ�ӳ�ʼ��
	cout << s2 << endl;		
	string s3 = "excuse";	//������ʼ��,ʹ�õȺų�ʼ���Ķ��ǿ�����ʼ��
	cout << s3 << endl;
	string s4 = s1;			//������ʼ��
	cout << s4 << endl;	
	string s5(5,'b');		//ֱ�ӳ�ʼ����s5������bbbbb
	cout << s5 << endl;
	//�����Ǹ�ֵ��ʽ����
	cout << "---------" << endl;
	cout << "��ֵ����" << endl;
	s = s3;
	cout << s << endl;
	s = "me";				//���ַ�������ֵ��string����ֵ�ǿ��е�
	cout << s << endl;
	//������string����ıȽϣ��Լ�+��ʹ��
	//+��string������Խ��еĲ��������ַ�������ֵ��string�ǲ�ͬ������
	//��˱���ȷ��ÿ���ӷ����������Ķ���������һ����string
	cout << "--------" << endl;
	cout << "�Ƚ�string����,�Լ�+��ʹ��" << endl;
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
	cout << "���Կɷ�ʹ��\\nȡ��std::endl----����\n";  //����
	//��ȡ��ϰ
	/*�����롰yes rpg��֮�������getline�����ȴ��ٴ�����ֱ�ӾͶ�ȡ��ʣ�µġ�rpg����
	������ֻ����һ��yes��getlineҲ��ֱ�Ӷ�ȡһ�����ַ�����
	������Ϊ��������������û��س�����\n������cin�У���getline�����Ϊ���з��Ĵ���
	���ٵȴ��ٴ�����ֱ�ӽ�ʣ�µ��ַ����루���з���������
	*/
	cout << "--------" << endl;
	cout << "��ȡ��ϰ1������ʧ��" << endl;
	cin >> s1;				
	cout << s1 << "      //cin >> s1;" << endl;
	getline(cin,s2);		
	cout << s2 <<"       //getline(cin,s2)"<< endl;
	//��������ȷ��cin��getline���÷�ʽ
	cout <<"��ȡ��ϰ2�����óɹ�"<<endl;
	cin >> s1;
	cout << s1 << "      //cin >> s1;" << endl;
	cin.ignore(1024,'\n');		
	/*ʹ�á�cin.ignore()����������Իس����������뻺����������,
	������һ���������һ�������Ӱ��,cin.ignore�÷�������������cin������ȡ�ַ���
	��ȡ���ַ������ԣ�ignore��������ʹ�á�ÿ����һ���ַ�������Ҫ�����ͱȽ��ַ���
	�������ֵ�ﵽa���߱��������ַ���ch����cin.ignore()����ִ����ֹ������
	�������ȴ������cin.ignore()������������Ĭ�ϲ���Ϊcin.ignore(1,EOF)��
	����EOFǰ��1���ַ������û������EOF�����һ���ַ�Ȼ��������ᵼ�²���ȷ�Ľ����
	��ΪEOF���ļ�������ʶ��*/
	getline(cin, s2);
	cout << s2 << "       //getline(cin,s2)" << endl;
	//������string��enpty��size����
	cout << "--------" << endl;
	cout << "string��enpty��size����" << endl;
	if (!s2.empty())
		cout << "s2�ǿ�" << endl;
	auto s2_size = s2.size();	//�˴���s2_size��string::size_type���͵ģ��޷�������
	cout << s2_size << endl;
	return 0;
}
/***********
��visual studio 2017�е����н��Ϊ��
---------------------------------------------
��ʼ������

hello
hello
excuse
hello
bbbbb
---------
��ֵ����
excuse
me
--------
�Ƚ�string����,�Լ�+��ʹ��
0>1
a>A
A>B
01aAB
���Կɷ�ʹ��\nȡ��std::endl----����
--------
��ȡ��ϰ1������ʧ��
Yes RPG
Yes      //cin >> s1;
RPG        //getline(cin,s2)
��ȡ��ϰ2�����óɹ�
Yes RPG
Yes      //cin >> s1;
YEs RPG
YEs RPG       //getline(cin,s2)
--------
string��enpty��size����
s2�ǿ�
7
---------------------------------------------
**********/
/*
Ҫ�㣺
1.	��Ҫʹ��`using namespace std;`�����������ڸ��ӳ�������Ϊ�����ֶ�����
2.	string���������ӣ�+��string������Խ��еĲ��������ַ�������ֵ��string��
��ͬ��������˱���ȷ��ÿ���ӷ����������Ķ���������һ����string��
3.   cin>>��getline��cin,s���������ʱӦ����������ʹ��cin>>����һ���ַ�����ʹ
�ַ����м䡢��βû���κοհ׷�������������û��س���������룬���������ַ�����
������һ�����з���\\n��,���ڻ��з��Ĵ��ڣ�getline()�᲻�ȴ��ٴ�����ֱ�ӽ�cin>>
�����ʣ�µ��ַ���ֱ�����뵽string����s�У����з���������������ʹ�á�cin.ignore()��
����Իس����������뻺����������,������һ���������һ�������Ӱ��.
4.	cin.ignore(a,ch);�÷�������������cin������ȡ�ַ�����ȡ���ַ������ԣ�ignore����
����ʹ�á�ÿ����һ���ַ�������Ҫ�����ͱȽ��ַ����������ֵ�ﵽa���߱��������ַ�
��ch����cin.ignore()����ִ����ֹ�������������ȴ������cin.ignore()������������
Ĭ�ϲ���Ϊcin.ignore(1,EOF)������EOFǰ��1���ַ������û������EOF�����һ���ַ�Ȼ
��������ᵼ�²���ȷ�Ľ������ΪEOF���ļ�������ʶ��
*/
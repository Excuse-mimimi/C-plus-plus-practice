/*
��ϰ���ͣ�C++primer5 Page6
ʱ�䣺2017��4��29��22:22:03
�����ܣ�ʹ��IO�⣬�������������������������ĺ�
*/
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;		//������stream��д������
	int v1 = 0, v2 = 0;									
	std::cin >> v1 >> v2;								//������ȡ����
	std::cout << "The sum of " << v1 << " and " << v2   //ע�⡰<<���͡�>>����ǰ��ո�
		<< " is " << v1 + v2 << std::endl;
	return 0;
}
/*
��visual studio 2017�е����н��Ϊ��
-----------------------------------
Enter two numbers:
25 32
The sum of 25 and 32 is 57
-----------------------------------
*/
/*
Ҫ�㣺
1.
	�������� << ��������Ϊostream�����Ҳ�ΪҪ��ӡ��ֵ��
	�����㷵����������������Ϊ��������������ʾ��
2.
	std::cout << "Enter two numbers:" << std::endl;
	�ȼ���
	(std::cout << "Enter two numbers:") << std::endl;
	�ȼ���
	std::cout << "Enter two numbers:" ;
	std::cout << std::endl;

3.
	ǰ׺std::ָcout��cin�Ƕ�������Ϊstd�������ռ䣨namespace���еģ������ռ���԰����������ֶ����ͻ�Լ�����
	��ͬ���ִ����ĳ�ͻ��
	:: �������������
4.
	endl��һ������ֵ����һ����������Ч���ǽ�����ǰ�У��������豸�����Ļ�������buffer���е�����ˢ���豸�С�
5.
	����stream����һ��������һ���ַ����У��Ǵ�IO�豸������д��IO�豸�ġ�
6.
	��������� >> �����Ϊistream�����Ҳ�ΪҪ���ܸ�istreamֵ�Ķ���
	�����㷵����������������Ϊ��������������ʾ��
7.
	std::cin >> v1 >> v2;
	�ȼ���
	��std::cin >> v1 ��>> v2;
	�ȼ���
	std::cin >> v1;
	std::cin >> v2;

*/
/*
���⣺���д���Ϸ���
	std::cout << "The sum of " << v1 ��
		<< " and " << v2��
		<< " is " << v1 + v2 << std::endl;
�𰸣����Ϸ�����Ϊ << ��������������Ϊһ��ostream����
*/
#include <iostream>
using namespace std;
#include <string>
#include <stdexcept>   //tuntime_error�����ͷ�ļ���
#include "1/Sales_item.h"
#include <cctype>
#include <initializer_list>

//int main()
//{
//	Sales_item item1, item2;
//	cin >> item1 >> item2;
//	//���ȼ���Ƿ�ͬһ���鼮
//	if (item1.isbn() != item2.isbn())
//	{
//		//ʹ��throw���ʽ�׳��쳣
//		throw runtime_error("ISBN�����");
//	}
//
//	cout << (item1 + item2) << endl;
//
//	return 0;
//}
//

//int main()
//{
//	Sales_item item1, item2;
//	while (cin >> item1 >> item2)
//	{
//		try
//		{
//			//����Ƿ�����һ���鼮׼���׳��쳣
//			if (item1.isbn() != item2.isbn())
//			{
//				throw runtime_error("���isbn�����");
//			}
//			
//			cout << (item1 + item2) << endl;
//		}
//		catch (runtime_error err)  //catch���ȥ�����쳣
//		{
//			cout << err.what() << "\nTry Again? Enter y or n" << endl;
//			char c;
//			cin >> c;
//			if (!cin || c == 'n')
//			{
//				break;
//			}
//		}
//	}
//	
//	return 0;
//}



//int main()
//{
//	//5.23
//	//int a = 0;
//	//int b = 0;
//	//cin >> a >> b;
//	//
//	//cout << (a / b) << endl;
//
//	//5.24
//	int a = 0;
//	int b = 0;
//	
//	//cin >> a >> b;
//	//if (b == 0)
//	//{
//	//	throw runtime_error("����Ϊ0");
//	//}
//
//	//cout << "a / b = " << (a / b) << endl;
//
//	//5.25
//	while ((cout << "������������:>"),cin >> a >> b)
//	{
//		cout << endl;
//		try
//		{
//			if (b == 0)
//			{
//				throw runtime_error("����Ϊ0");
//			}
//			cout << "a / b = " << (a / b) << endl;
//		}
//		catch (runtime_error err)
//		{
//			cout << err.what() << "\n��ѡ���Ƿ��������룬ѡ�������� y ���������� n:>";
//			char c;
//			cin >> c;
//			if (!cin || c == 'n')
//			{
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	//try����
//	int a = 0;
//	int b = 0;
//	while ((cout << "������:>"), cin >> a >> b)
//	{
//		cout << endl;
//		try
//		{
//			if (b == 0)
//			{
//				//�׳��쳣
//				throw runtime_error("����Ϊ0��");
//			}
//
//			cout << "a / b = " << (a / b) << endl;
//		}
//		catch (runtime_error err)
//		{
//			cout << err.what() << endl << "��ѡ���Ƿ��������룬�������� y ���������� n :>";
//			char c = 0;
//			cin >> c;
//			if (!cin || c == 'n')
//			{
//				cout << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}


//һ���������ܹ�����string������ĳ��ָ�����ַ���һ�γ��ֵ�λ�ã�ͬʱ�ܷ�������ַ��ĳ��ִ���
//auto find_char(const string& s, char c, int& cnt)
//{
//	auto ret = s.size();  //��һ�γ��ֵ�λ��
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == c)
//		{
//			if (ret == s.size())
//			{
//				ret = i;
//			}
//			cnt++;
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	string s("Hello world!");
//	int cnt = 0;
//	char ch = 'l';
//	int ret = find_char(s, ch, cnt);
//	
//	cout << s << "�е�" << ch << "��һ�γ�����" << ret << "����";
//	cout << "һ��������" << cnt << "��" << endl;
//	return 0;
//}



//�鿴string�Ƿ��д�д��ĸ
//bool haveUpper(const string s)
//{
//	for (decltype(s.size()) i = 0; i < s.size(); i++)
//	{
//		if (isupper(s[i]))
//		{
//			return true;
//		}
//	}
//
//	return false;
//}
//
//int main()
//{
//	cout << haveUpper("hello") << endl;
//
//	return 0;
//}


//�������ô���
//void print(int(&arr)[9])   //arr���˵����Ų�����
//{
//	//��Χfor
//	for (auto i : arr)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	print(arr);
//
//	return 0;
//}

//void changePointer(int* (&p1), int* (&p2))
//{
//	int* temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	int* p1 = &a, * p2 = &b;
//	changePointer(p1, p2);
//
//	cout << *p1 << endl << *p2 << endl;
//
//	return 0;
//}


//6.23
//void print(const int i)
//{
//	cout << i << endl;
//}
//
//void print(const int(&j)[2])
//{
//	for (int i = 0; i < 2; i++)
//	{
//		cout << j[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int i = 5;
//	int j[2] = { 0,1 };
//	print(i);
//	print(j);
//
//	return 0;
//}

//int main(int argc, char* argv[])
//{
//	string s;
//	for (int i = 0; i < argc; i++)
//	{
//		s += argv[i];
//	}
//	cout << s << endl;
//
//	return 0;
//}

//void print(int(&nums)[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << nums[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(nums);
//
//	return 0;
//}


//���������Ϣ����
void error_msg(initializer_list<string> il)
{
	for (auto i = il.begin(); i != il.end(); i++)
	{
		cout << *i << " ";
	}

	cout << endl;
}

int main()
{
	
}
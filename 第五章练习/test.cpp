#include <iostream>
using namespace std;
#include <string>
#include <stdexcept>   //tuntime_error在这个头文件中
#include "1/Sales_item.h"
#include <cctype>
#include <initializer_list>

//int main()
//{
//	Sales_item item1, item2;
//	cin >> item1 >> item2;
//	//首先检查是否同一种书籍
//	if (item1.isbn() != item2.isbn())
//	{
//		//使用throw表达式抛出异常
//		throw runtime_error("ISBN不相等");
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
//			//检查是否是用一种书籍准备抛出异常
//			if (item1.isbn() != item2.isbn())
//			{
//				throw runtime_error("书的isbn不相等");
//			}
//			
//			cout << (item1 + item2) << endl;
//		}
//		catch (runtime_error err)  //catch语句去接收异常
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
//	//	throw runtime_error("除数为0");
//	//}
//
//	//cout << "a / b = " << (a / b) << endl;
//
//	//5.25
//	while ((cout << "请输入两个数:>"),cin >> a >> b)
//	{
//		cout << endl;
//		try
//		{
//			if (b == 0)
//			{
//				throw runtime_error("除数为0");
//			}
//			cout << "a / b = " << (a / b) << endl;
//		}
//		catch (runtime_error err)
//		{
//			cout << err.what() << "\n请选择是否重新输入，选择是输入 y ，不是输入 n:>";
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
//	//try语句块
//	int a = 0;
//	int b = 0;
//	while ((cout << "请输入:>"), cin >> a >> b)
//	{
//		cout << endl;
//		try
//		{
//			if (b == 0)
//			{
//				//抛出异常
//				throw runtime_error("除数为0！");
//			}
//
//			cout << "a / b = " << (a / b) << endl;
//		}
//		catch (runtime_error err)
//		{
//			cout << err.what() << endl << "请选择是否重新输入，是请输入 y ，否请输入 n :>";
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


//一个函数，能够返回string对象中某个指定的字符第一次出现的位置，同时能返回这个字符的出现次数
//auto find_char(const string& s, char c, int& cnt)
//{
//	auto ret = s.size();  //第一次出现的位置
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
//	cout << s << "中的" << ch << "第一次出现在" << ret << "处，";
//	cout << "一共出现了" << cnt << "次" << endl;
//	return 0;
//}



//查看string是否有大写字母
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


//数组引用传参
//void print(int(&arr)[9])   //arr两端的括号不可少
//{
//	//范围for
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


//输出错误信息函数
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
#include <iostream>
using namespace std;
#include <string>
#include <cctype>


//int main()
//{
//	string str1;
//	cin >> str1;    //cin会忽略字符串前面的空格，当读入第一个空格的时候就停止读入
//	cout << str1 << endl;
//	return 0;
//}


//int main()
//{
//	//string word;
//	//while (cin >> word)
//	//{
//	//	cout << word << " ";
//	//}
//
//
//	//使用getline读取一整行
//	//string str1;
//	//while (getline(cin, str1))
//	//{
//	//	cout << str1 << endl;
//	//}
//
//
//	////empty
//	//string str1;
//	//string str2("Hello world!");
//	////string的empty成员函数，如果串为空返回1，不为空返回0
//	//cout << "str1的状态为" << str1.empty() << endl;
//	//cout << "str2的状态为" << str2.empty() << endl;
//
//	//size
//	//string str1("Hello");
//	//cout << str1.size() << endl;
//	//cout << str1.length() << endl;
//
//	//每次只读一行，如果这一行的字符数大于4，我们就输出
//	//string line;
//	//while (cin >> line)
//	//{
//	//	if (line.size() > 4)
//	//	{
//	//		cout << line << endl;
//	//	}
//	//}
//
//	//推断size的类型
//	//string str1("Hello");
//	//str1.assign("HE");    //覆盖
//	//str1.append("pp");    //追加
//
//	//auto len1 = str1.size();
//	//auto len2 = str1.length();
//	//cout << str1 << endl;
//	
//	return 0;
//}


//3.2
//int main()
//{
//	//从标准输入中一次读一整行，然后修改程序，一次读一个词
//	
//	string line;
//	//while (getline(cin, line))
//	//{
//	//	cout << line << endl;
//	//}
//	string word;
//	while (cin >> word)
//	{
//		cout << word << " ";
//	}
//}


//3.3
//string类的输入运算符会忽略字符串前的空字符，开始读字符后，读到第一个空字符就停止了
//getline则会读一整行


//3.4
//int main()
//{
//	//输入两个字符串，如果相等输出结果，不相等输出较大的串
//	//修改程序，改成判断等长，如果不等长输出更长的
//
//	//比大小
//	string str1;
//	string str2;
//	cin >> str1;
//	cin >> str2;
//	//if (str1 == str2)
//	//{
//	//	cout << "字符串相等" << endl;
//	//}
//	//else if (str1 > str2)
//	//{
//	//	cout << str1 << endl;
//	//}
//	//else
//	//{
//	//	cout << str2 << endl;
//	//}
//	
//	//比长短
//	//if (str1.size() == str2.size())
//	//{
//	//	cout << "字符串长度相等" << endl;
//	//}
//	//else if (str1.size() > str2.size())
//	//{
//	//	cout << str1 << endl;
//	//}
//	//else
//	//{
//	//	cout << str2 << endl;
//	//}
//
//	return 0;
//}


//int main()
//{
//	//输入多个字符串并将他们连接在一起，输出连接后的大串
//	//修改程序，用空格把输入的多个字符串分割开
//	string temp;
//	string str;
//	//while (cin >> temp)
//	//{
//	//	str += temp;
//	//}
//	while (cin >> temp)
//	{
//		str = str + " " + temp;
//	}
//
//	cout << str << endl;
//	return 0;
//}


//int main()
//{
//	//C++11范围for语句
//	//string str("Hello world!");
//	//重复输出str中一个字符
//	//for (auto c : str)
//		//cout << c;
//
//
//	//使用范围for去计算一个句子中的标点
//	string str("Hello world!!!!!!");
//	decltype(str.size()) punctCnt = 0;
//	
//	for (auto c : str)
//	{
//		if (ispunct(c))
//		{
//			punctCnt++;
//		}
//	}
//
//	cout << str << "中的标点符号有" << punctCnt << "个" << endl;
//
//	return 0;
//}



//3.6使用范围for把一串字符串中所有字符替换成x
//int main()
//{
//	//string str1("Hello world!!!!!!!!");
//	//for (auto& c : str1)
//	//{
//	//	c = 'x';
//	//}
//
//	//cout << str1 << endl;
//
//	//用while循环和传统for循环重写
//	string str1("Hello world!");
//	//decltype(str1.size()) i = 0;
//	//while (i < str1.size())
//	//{
//	//	str1[i] = 'x';
//	//	i++;
//	//}
//
//	//for (decltype(str1.size()) i = 0; i < str1.size(); i++)
//	//{
//	//	str1[i] = 'x';
//	//}
//
//	//cout << str1 << endl;
//
//	return 0;
//}



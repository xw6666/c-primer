#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <iterator>
#include <initializer_list>

//double fac(int n)
//{
//	double ret = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	while (1)
//	{
//		cout << "请输入要求的数量:>";
//		int n = 0;
//		cin >> n;
//		cout << endl;
//		vector<int> dp((n + 1), 0);
//		if (n <= 1)
//		{
//			cout << "概率为：0" << endl;
//			continue;
//		}
//		dp[0] = 0;
//		dp[1] = 0;
//		dp[2] = 1;
//
//		for (int i = 3; i < n + 1; i++)
//		{
//			dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
//		}
//
//		//double base = fac(n);
//
//		//double ret = 1.0 * dp[n] / base;
//
//		//cout << "概率为：" << ret << endl;
//		cout << dp[n] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int getSum(initializer_list<int>& li)
//{
//	int sum = 0;
//	for (auto i = li.begin(); i != li.end(); i++)
//	{
//		sum += (*i);
//	}
//
//	return sum;
//}
//
//
//int main()
//{
//	initializer_list<int> li{ 1,2,3,4,5,6,7,8,9,10 };
//
//	cout << getSum(li) << endl;
//
//	return 0;
//}


//6.30
//bool str_subrange(const string& str1, const string& str2)
//{
//	if (str1.size() == str2.size())
//	{
//		return str1 == str2;
//	}
//	//得到较小的string的大小
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//
//	//检查两个string对象的字符是否相等
//	for (decltype(size) i = 0; i != size; i++)
//	{
//		if (str1[i] != str2[i])
//		{
//			return;   //错误1，没有返回值，运行后编译器报错
//		}
//	}
//	//错误2，控制流可能未返回任何值就结束了函数的执行，编译器可能检查不出来
//}         


//6.32
//int& get(int* arry, int index)
//{
//	return arry[index];
//}
//
//int main()
//{
//	int ia[10];
//	for (int i = 0; i != 10; i++)
//	{
//		get(ia, i) = i;
//	}
//
//	for (int i = 0; i != 10; i++)
//	{
//		cout << ia[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}


//6.33
//void input_vector(vector<int>& ivec)
//{
//	if (ivec.size() == 0)
//	{
//		return;
//	}
//	else
//	{
//		int temp = *(ivec.end() - 1);
//		ivec.pop_back();
//		input_vector(ivec);
//		cout << temp << " ";
//	}
//}
//
//int main()
//{
//	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
//	input_vector(v);
//	return 0;
//}


//6.36
//int func1(int (&arr)[10]);
//
//string(&(func2(int)))[10];
//
////重命名法
//typedef string arrS[10];    //arrS是string[10]的别名
//arrS& func3(int);
//
////使用尾置返回类型 - C++11
//auto func4(int)->string(&)[10];
//
////使用decltype - C++11
//string odd[10] = { 0 };
//decltype(odd)& func5(int);

//const string& shorterString(const string& s1, const string& s2)   //底层const，可以发生重载
//{
//	return s1.size() <= s2.size() ? s1 : s2;
//}
//
//string& shorterString(string& s1, string& s2)
//{
//	auto& r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
//
//	return const_cast<string&>(r);
//}

//int func(int, int)
//{
//	return 0;
//}
//int func(const int, const int)   //顶层const，不能发生重载
//{
//	return 0;
//}

//int* func(int*);
//double* func(double*);
//
//int main()
//{
//	return 0;
//}


//void func(int a, int b, int c = 10);
////void func(int a, int b, int c = 20);    //错误，改变默认参数的值不能发生重载
//void func(int a, int b, int c);   //正确

//void func(int a = 10, int b, int c = 20);  //从第一个默认参数开始，后面每个参数都要有默认参数

//int main()
//{
//	return 0;
//}

//void init(int ht, int wd = 80, char bckgrnd = ' ')
//{
//	cout << "Hello!" << endl;
//}
//
//int main()
//{
//	init(5,68);
//	init(14, '*');    //与程序员初衷不符
//
//	return 0;
//}

//内联函数
//inline const string& shorterString(const string& s1, const string& s2)
//{
//	return s1.size() <= s2.size() ? s1 : s2;
//}
//
//int main()
//{
//	string s1 = "abcdefef";
//	string s2{ "cdefgd" };
//
//	cout << shorterString(s1, s2) << endl;
//
//	return 0;
//}


//C++11 constexpr函数
//能用于常量表达式的函数
//函数的返回类型及所有形参都是字面值类型，而且函数体中必须有且只有一条return语句
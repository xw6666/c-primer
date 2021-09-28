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
void input_vector(vector<int>& ivec)
{
	if (ivec.size() == 0)
	{
		return;
	}
	else
	{
		int temp = *(ivec.end() - 1);
		ivec.pop_back();
		input_vector(ivec);
		cout << temp << " ";
	}
}

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	input_vector(v);
	return 0;
}
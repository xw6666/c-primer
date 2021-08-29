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
//		double base = fac(n);
//
//		double ret = 1.0 * dp[n] / base;
//
//		cout << "概率为：" << ret << endl;
//	}
//
//	system("pause");
//	return 0;
//}

int getSum(initializer_list<int>& li)
{
	int sum = 0;
	for (auto i = li.begin(); i != li.end(); i++)
	{
		sum += (*i);
	}

	return sum;
}


int main()
{
	initializer_list<int> li{ 1,2,3,4,5,6,7,8,9,10 };

	cout << getSum(li) << endl;

	return 0;
}
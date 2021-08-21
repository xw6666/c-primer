//#include <iostream>
//using namespace std;
//#include <string>


//int test1()
//{
//	int sum = 0;
//	for (int i = -100; i <= 100; i++)
//	{
//		sum += i;
//	}
//
//	return sum;
//}


//从cin读取一组数输出和
//int test2()
//{
//	int sum = 0;
//	int temp = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> temp;
//		sum += temp;
//	}
//
//	return sum;
//}
//
//int main()
//{
//	//cout << test1() << endl;
//	//cout << test2() << endl;
//	return 0;
//}

//int main()
//{
//	int curVal = 0;
//	int val = 0;
//	if (cin >> curVal)
//	{
//		int cnt = 1;
//		while (cin >> val)
//		{
//			if (val == curVal)
//			{
//				cnt++;
//			}
//			else
//			{
//				cout << curVal << " occurs " << cnt << " times" << endl;
//				//更新curVal
//				curVal = val;
//				cnt = 1;
//			}
//			cout << curVal << " occurs " << cnt << " times" << endl;
//
//		}
//	}
//
//	return 0;
//}
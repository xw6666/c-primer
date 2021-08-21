#include <iostream>
using namespace std;
#include <string>
#include "1/Sales_item.h"

//int main()
//{
//	Sales_item item;
//	while (cin >> item)
//	{
//		cout << item << endl;
//	}
//
//	return 0;
//}



//读取两个Sales_item对象，输出他们的和
//int main()
//{
//	Sales_item item1;
//	Sales_item item2;
//	cin >> item1;
//	cin >> item2;
//
//	cout << item1 + item2 << endl;
//
//	return 0;
//}



//获取多个具有相同ISBN的销售记录，输出他们的和
//int main()
//{
//	Sales_item item;
//	Sales_item temp;
//	int cnt = 0;
//	while (cin >> temp)
//	{
//		cnt++;
//		if (cnt == 1)
//		{
//			//第一次是拷贝
//			item = temp;
//		}
//		else
//		{
//			item += temp;
//		}
//	}
//	
//	cout << item << endl;
//
//	return 0;
//}

//统计多条销售记录，并统计每个ISBN有几条销售记录
//int main()
//{
//	Sales_item item;
//	Sales_item curItem;
//	int cnt = 0;
//	if (cin >> curItem)
//	{
//		cnt++;
//		while (cin >> item)
//		{
//			if (item.isbn() == curItem.isbn())
//			{
//				curItem += item;
//				cnt++;
//			}
//			else
//			{
//				//更新新ISBN
//				cout << curItem.isbn() << " arreared " << cnt << " times " << curItem << endl;
//				curItem = item;
//				cnt = 1;
//			}
//		}
//		cout << curItem.isbn() << " arreared " << cnt << " times " << curItem << endl;
//	}
//	else
//	{
//		cout << "No data?!" << endl;
//
//		return -1;
//	}
//
//
//	return 0;
//}

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



//��ȡ����Sales_item����������ǵĺ�
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



//��ȡ���������ͬISBN�����ۼ�¼��������ǵĺ�
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
//			//��һ���ǿ���
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

//ͳ�ƶ������ۼ�¼����ͳ��ÿ��ISBN�м������ۼ�¼
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
//				//������ISBN
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

#include <iostream>
using namespace std;
#include <string>
#include <cctype>


//int main()
//{
//	string str1;
//	cin >> str1;    //cin������ַ���ǰ��Ŀո񣬵������һ���ո��ʱ���ֹͣ����
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
//	//ʹ��getline��ȡһ����
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
//	////string��empty��Ա�����������Ϊ�շ���1����Ϊ�շ���0
//	//cout << "str1��״̬Ϊ" << str1.empty() << endl;
//	//cout << "str2��״̬Ϊ" << str2.empty() << endl;
//
//	//size
//	//string str1("Hello");
//	//cout << str1.size() << endl;
//	//cout << str1.length() << endl;
//
//	//ÿ��ֻ��һ�У������һ�е��ַ�������4�����Ǿ����
//	//string line;
//	//while (cin >> line)
//	//{
//	//	if (line.size() > 4)
//	//	{
//	//		cout << line << endl;
//	//	}
//	//}
//
//	//�ƶ�size������
//	//string str1("Hello");
//	//str1.assign("HE");    //����
//	//str1.append("pp");    //׷��
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
//	//�ӱ�׼������һ�ζ�һ���У�Ȼ���޸ĳ���һ�ζ�һ����
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
//string������������������ַ���ǰ�Ŀ��ַ�����ʼ���ַ��󣬶�����һ�����ַ���ֹͣ��
//getline����һ����


//3.4
//int main()
//{
//	//���������ַ����������������������������ϴ�Ĵ�
//	//�޸ĳ��򣬸ĳ��жϵȳ���������ȳ����������
//
//	//�ȴ�С
//	string str1;
//	string str2;
//	cin >> str1;
//	cin >> str2;
//	//if (str1 == str2)
//	//{
//	//	cout << "�ַ������" << endl;
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
//	//�ȳ���
//	//if (str1.size() == str2.size())
//	//{
//	//	cout << "�ַ����������" << endl;
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
//	//�������ַ�����������������һ��������Ӻ�Ĵ�
//	//�޸ĳ����ÿո������Ķ���ַ����ָ
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
//	//C++11��Χfor���
//	//string str("Hello world!");
//	//�ظ����str��һ���ַ�
//	//for (auto c : str)
//		//cout << c;
//
//
//	//ʹ�÷�Χforȥ����һ�������еı��
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
//	cout << str << "�еı�������" << punctCnt << "��" << endl;
//
//	return 0;
//}



//3.6ʹ�÷�Χfor��һ���ַ����������ַ��滻��x
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
//	//��whileѭ���ʹ�ͳforѭ����д
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



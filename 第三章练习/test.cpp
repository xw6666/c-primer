#include <iostream>
using namespace std;
#include <string>
#include <cctype>
#include <vector>
#include <iterator>


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


//int main()
//{
//	//vector<string> svec;   //Ĭ�ϳ�ʼ��vector��û���κ�Ԫ��
//	//C++11�б��ʼ��
//	//vector<string> svec{ "a", "an", "the" };
//	
//	//ʹ�õ���������
//	//for (vector<string>::iterator it = svec.begin(); it != svec.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//	
//	//vector<int> v1(10);   //������10��Ԫ�أ�ÿ��Ԫ�ض���0
//	//vector<string> v2(5);  //vector��5��string��ÿ��string���ǿմ�
//
//
//	//vector<int> v1(10);     //10��Ԫ�أ�ÿ��Ԫ����0
//	//vector<int> v2{ 10 };   //1��Ԫ�أ����Ԫ����10
//
//	//vector<int> v3(10, 1);  //10��Ԫ�أ�ÿ��Ԫ����1
//	//vector<int> v4{ 10,1 }; //2��Ԫ�أ���һ��Ԫ����10���ڶ���Ԫ����1
//
//	//�����ǵȼ۵�
//	//vector<string> v5(10, "null");
//	//vector<string> v6{ 10, "null" };
//	
//	//for (vector<string>::iterator it = v6.begin(); it != v6.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	return 0;
//}


//int main()
//{
//	//3.14��cin����һ�������������Ǵ���һ��vector������
//	//vector<int> v1;
//	//int temp;
//	//while (cin >> temp)
//	//{
//	//	v1.push_back(temp);
//	//}
//
//
//	//3.15���������ĳɶ��ַ���
//	vector<string> v2;
//	string temp;
//	while (cin >> temp)
//	{
//		v2.push_back(temp);
//	}
//}


//int main()
//{
//	//���÷�Χfor����vector�е�Ԫ��
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	for (auto& i : v1)
//	{
//		i = i * i;
//	}
//
//	for (auto& i : v1)
//	{
//		cout << i << " ";
//	}
//
//	return 0;
//}

//template <class T>
//void print(vector<T>& v)
//{
//	for (auto& i : v)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//}

//int main()
//{
//	//3.16
//	vector<int> v1;
//	print(v1);
//
//	vector<int> v2(10);   //10��0
//	print(v2);
//
//	vector<int> v3(10, 42);  //10��42
//	print(v3);
//
//	vector<int> v4{ 10 };   //1��10
//	print(v4);
//
//	vector<int> v5{ 10, 42 };   //һ��10��һ��42
//	print(v5);
//
//	vector<string> v6{ 10 };   //10���մ�
//	print(v6);
//
//	vector<string> v7{ 10, "hi" };  //10��"hi"
//	print(v7);
//
//	return 0;
//}


//3.17��cin����һ�鵥�ʲ�����vector��Ȼ������Ǹĳɴ�д��ʽ����������ÿ����ռһ��
//int main()
//{
//	vector<string> v1;
//	string word;
//	while (cin >> word)
//	{
//		v1.push_back(word);
//	}
//
//	for (auto& t : v1)
//	{
//		for (int i = 0; i < t.size(); i++)
//		{
//			t[i] = toupper(t[i]);
//		}
//		cout << t << endl;
//	}
//
//	return 0;
//}


//3.19����һ������10��Ԫ�ص�vector���� - 3�ַ���
//int main()
//{
//	vector<int> v1(10, 42);
//	vector<int> v2{ 42,42,42,42,42,42,42,42,42,42 };
//	vector<int> v3 = { 42,42,42,42,42,42,42,42,42,42 };
//
//	return 0;
//}


//3.20����һ�������������Ǵ���vector���飬��ÿ�����������ĺ����
//int main()
//{
//	vector<int> v1;
//	int temp;
//	while (cin >> temp)
//	{
//		v1.push_back(temp);
//	}
//
//	//for (decltype(v1.size()) i = 0; i < v1.size(); i++)
//	//{
//	//	if (v1.size() == 1)
//	//	{
//	//		break;
//	//	}
//
//	//	if (i == 0)
//	//	{
//	//		cout << v1[i + 1] << " ";
//	//	}
//	//	else if (i == v1.size() - 1)
//	//	{
//	//		cout << v1[i - 1] << " ";
//	//	}
//	//	else
//	//	{
//	//		cout << v1[i - 1] + v1[i + 1] << " ";
//	//	}
//	//}
//
//	//�޸ĳ���Ҫ�������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�صĺ�
//	decltype(v1.size()) left = 0;
//	decltype(v1.size()) right = v1.size() - 1;
//	while (left <= right)
//	{
//		cout << v1[left] + v1[right] << " ";
//		left++;
//		right--;
//	}
//	
//	return 0;
//}



//3.21
//template <class T>
//void print(vector<T> v)
//{
//	for (auto it = v.begin();; it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	
//}


//3.23
//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
//
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		*i = 2 * (*i);
//	}
//
//	for (auto& i : v)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//3.24
//int main()
//{
//	vector<int> v;
//	int temp = 0;
//	while (cin >> temp)
//	{
//		v.push_back(temp);
//	}
//
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		if (v.size() == 1)
//		{
//			break;
//		}
//
//		if (i == v.begin())
//		{
//			cout << *(i + 1) << " ";
//		}
//		else if (i == v.end() - 1)
//		{
//			cout << *(i - 1) << " ";
//		}
//		else
//		{
//			cout << *(i - 1) + *(i + 1) << " ";
//		}
//	}
//	cout << endl;
//
//	return 0;
//}

//3.25
//int main()
//{
//	vector<unsigned int> sores(11, 0); //11�������Σ�ȫ����ʼ��Ϊ0
//	unsigned int grade = 0;
//	while (cin >> grade)
//	{
//		if (grade <= 100)
//			++sores[grade / 10];
//	}
//
//	for (auto i = sores.begin(); i != sores.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//
//	return 0;
//}


//string sa[10];
//int ia[10];
//int main()
//{
//	string sa2[10];
//	int ia2[10];
//
//	return 0;
//}


//3.32
//int main()
//{
//	vector<int> v1(10);
//	vector<int> v2(10);
//	
//	int tag = 0;
//	for (auto i = v1.begin(); i != v1.end(); i++)
//	{
//		*i = tag++;
//	}
//
//	//��v1������v2
//	tag = 0;
//	for (auto i = v2.begin(); i != v2.end(); i++)
//	{
//		*i = v1[tag++];
//	}
//
//	for (auto& i : v2)
//	{
//		cout << i << " ";
//	}
//
//	return 0;
//}




//C++11begin��end����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* beg = begin(arr);  //ָ���һ��Ԫ��
//	int* last = end(arr);   //ָ�����һ��Ԫ�ص���һ��λ��
//
//	while (beg != last)
//	{
//		cout << *beg << " ";
//		beg++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	auto n = end(arr) - begin(arr);
//
//
//	return 0;
//}



//3.36��д����Ƚ�vector��Ԫ���Ƿ����
//int main()
//{
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	vector<int> v2 = { 1,2,3,4,5,6,7,8,9 };
//
//	if (v1.size() != v2.size()) 
//	{
//		cout << "v1��v2�����" << endl;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < v1.size(); i++)
//		{
//			if (v1[i] != v2[i])
//			{
//				cout << "v1��v2�����" << endl;
//				break;
//			}
//		}
//
//		if (v1.size() == i)
//		{
//			cout << "v1��v2���" << endl;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	//3.39
//	string str1{ "Hello world" };
//	string str2 = "Hello world";
//
//	if (str1 == str2)
//	{
//		cout << "equal" << endl;
//	}
//	else
//	{
//		cout << "no equal" << endl;
//	}
//
//	char str3[] = "abcdef";
//	char str4[] = "abcdef";
//	if (!strcmp(str3, str4))
//	{
//		cout << "equal" << endl;
//	}
//	else
//	{
//		cout << "no equal" << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	//c_str�����᷵��һ��ָ�룬����������c����ַ�������string
//	string s("Hello world!");
//	auto str = s.c_str();   //���ص���const char*
//	
//
//	return 0;
//}



//�������ʼ��vector
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	vector<int> ivec(begin(arr), end(arr));  //��0���±꿽����arr - 1
//
//	for (int i = 0; i < ivec.size(); i++)
//	{
//		cout << ivec[i] << " ";
//	}
//	
//
//	return 0;
//}


//int main()
//{
//	//3.41
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	vector<int> ivec(arr + 1, arr + 10);
//
//	for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	return 0;
//}

//3.42
//int main()
//{
//	vector<int> v1{ 1,2,3,4,5,6 };
//	
//	int arr[6];
//	for (int i = 0; i < v1.size(); i++)
//	{
//		arr[i] = v1[i];
//	}
//
//	return 0;
//}


int main()
{
	vector<int> ivec(10, 1);
	for (vector<int>::iterator it; it != ivec.end(); it++)
	{
		cout << *it << " ";
	}
	
	return 0;
}
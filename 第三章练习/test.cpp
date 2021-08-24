#include <iostream>
using namespace std;
#include <string>
#include <cctype>
#include <vector>
#include <iterator>


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


//int main()
//{
//	//vector<string> svec;   //默认初始化vector里没有任何元素
//	//C++11列表初始化
//	//vector<string> svec{ "a", "an", "the" };
//	
//	//使用迭代器迭代
//	//for (vector<string>::iterator it = svec.begin(); it != svec.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//	
//	//vector<int> v1(10);   //容器内10个元素，每个元素都是0
//	//vector<string> v2(5);  //vector内5个string，每个string都是空串
//
//
//	//vector<int> v1(10);     //10个元素，每个元素是0
//	//vector<int> v2{ 10 };   //1个元素，这个元素是10
//
//	//vector<int> v3(10, 1);  //10个元素，每个元素是1
//	//vector<int> v4{ 10,1 }; //2个元素，第一个元素是10，第二个元素是1
//
//	//两个是等价的
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
//	//3.14用cin读入一组整数并把它们存入一个vector对象中
//	//vector<int> v1;
//	//int temp;
//	//while (cin >> temp)
//	//{
//	//	v1.push_back(temp);
//	//}
//
//
//	//3.15把上面程序改成读字符串
//	vector<string> v2;
//	string temp;
//	while (cin >> temp)
//	{
//		v2.push_back(temp);
//	}
//}


//int main()
//{
//	//利用范围for处理vector中的元素
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
//	vector<int> v2(10);   //10个0
//	print(v2);
//
//	vector<int> v3(10, 42);  //10个42
//	print(v3);
//
//	vector<int> v4{ 10 };   //1个10
//	print(v4);
//
//	vector<int> v5{ 10, 42 };   //一个10，一个42
//	print(v5);
//
//	vector<string> v6{ 10 };   //10个空串
//	print(v6);
//
//	vector<string> v7{ 10, "hi" };  //10个"hi"
//	print(v7);
//
//	return 0;
//}


//3.17从cin读入一组单词并存入vector，然后把它们改成大写形式，输出结果，每个词占一行
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


//3.19定义一个含有10个元素的vector对象 - 3种方法
//int main()
//{
//	vector<int> v1(10, 42);
//	vector<int> v2{ 42,42,42,42,42,42,42,42,42,42 };
//	vector<int> v3 = { 42,42,42,42,42,42,42,42,42,42 };
//
//	return 0;
//}


//3.20读入一组整数并把它们存入vector数组，将每对相邻整数的和输出
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
//	//修改程序，要求输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和
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
//	vector<unsigned int> sores(11, 0); //11个分数段，全部初始化为0
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
//	//将v1拷贝到v2
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




//C++11begin和end函数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* beg = begin(arr);  //指向第一个元素
//	int* last = end(arr);   //指向最后一个元素的下一个位置
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



//3.36编写程序比较vector中元素是否相等
//int main()
//{
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	vector<int> v2 = { 1,2,3,4,5,6,7,8,9 };
//
//	if (v1.size() != v2.size()) 
//	{
//		cout << "v1和v2不相等" << endl;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < v1.size(); i++)
//		{
//			if (v1[i] != v2[i])
//			{
//				cout << "v1和v2不相等" << endl;
//				break;
//			}
//		}
//
//		if (v1.size() == i)
//		{
//			cout << "v1和v2相等" << endl;
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
//	//c_str函数会返回一个指针，这样可以用c风格字符串管理string
//	string s("Hello world!");
//	auto str = s.c_str();   //返回的是const char*
//	
//
//	return 0;
//}



//用数组初始化vector
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	vector<int> ivec(begin(arr), end(arr));  //从0号下标拷贝到arr - 1
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
#include <iostream>
using namespace std;

//int main()
//{
//	unsigned u = 10;
//	int i = -42;
//	cout << i + i << endl;
//	cout << u + i << endl;  //11111111111111111111111111100000
//	cout << UINT_MAX << endl;
//	cout << INT_MAX << endl;
//	return 0;
//}

//int main()
//{
//	unsigned u = 10, u2 = 42;
//	cout << u2 - u << endl;
//	cout << u - u2 << endl;
//
//	int i = 10, i2 = 42;
//	cout << i2 - i << endl;
//	cout << i - i2 << endl;
//	cout << i - u << endl;
//	cout << u - i << endl;
//	return 0;
//}

//int main()
//{
//	int a = 09;
//	cout << a << endl;
//	return 0;
//}


//2.8
//int main()
//{
//	cout << "2M" << endl;
//	cout << 2 << "\t" << "M" << endl;
//	return 0;
//}


//2.2.4
//int main()
//{
//	int  i = 100, sum = 0;
//	for (int i = 0; i != 10; i++)
//	{
//		sum += i;
//	}
//	cout << i << " " << sum << endl;
//	return 0;
//}

//int size()
//{
//	return 1;
//}
//
//int main()
//{
//	//c++11可以通过constexpr来确保是常量表达式
//
//	return 0;
//}


//int main()
//{
//	int i = 0, & r = i;
//	auto a = r;     //int
//
//	const int ci = i, & cr = ci;
//	auto b = ci;     //int
//	auto c = cr;     //int  （cr是ci的别名，ci本质是一个顶层const）
//	auto d = &i;     //int*
//	auto e = &ci;    //const int* - 要确保ci不能通过指针改变（所以设置成底层const）
//	auto& g = ci;    //cont int& 
//
//
//	a = 42;   //单纯a被改成42
//	b = 42;   //单纯b被改成43
//	c = 42;   //单纯c被改成42
//	//d = 42;   //报错，指针不能修改成这个
//	//e = 42;     //报错，e是const int*，不能修改
//	//g = 42;     //g是ci别名，不能修改
//}
//
//
//
//int main()
//{
//	const int i = 42;
//	//cout << typeid(i).name() << endl;
//
//	auto j = i;    //int类型
//	const auto& k = i;    //const int&
//	auto* p = &i;    //const int*
//	const auto j2 = i, & k2 = i;    //j2是const int 类型 k2是const int& 
//	
//	return 0;
//}


//c++11 - decltype

//int main()
//{
//	int i = 42;
//	int* p = &i;
//	int& r = i;
//	decltype(*p) c = i;    //p是指针*p就是指针所指的对象，指针所指的对象的类型就是引用类型
//	decltype(r + 1)d = 5;   //r是引用类型，加1以后的结果是引用类型 所以d是int类型
//
//	decltype(i)e = 50;   //i的类型是int，所以e是int类型的
//	decltype((i))f = i;   //i旁边有括号，所以decltype中的是一个表达式，表达式i的结果是int&
//
//	return 0;
//}

//2.5.3练习
//int main()
//{
//	//int a = 3, b = 4;
//	//decltype(a) c = a;
//	//decltype((b)) d = a;
//	//++c;
//	//++d;
//	//cout << "a = " << a << endl;   //4
//	//cout << "b = " << b << endl;   //4
//	//cout << "c = " << c << endl;   //4
//	//cout << "d = " << d << endl;   //4
//
//	int a = 3, b = 4;   
//	decltype(a) c = a;
//	decltype(a = b) d = a;
//	//a - int, b - int, c - int, d - int&
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	auto b = a;
//	decltype(a) c = a;   //此时auto与decltype是一个类型 都是int
//
//	const int A = 0;
//	auto d = A;    //d是int类型，顶层const被忽略
//	decltype(A) e = A;   //e是const int类型
//	return 0;
//}
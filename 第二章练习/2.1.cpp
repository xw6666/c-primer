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
//	//c++11����ͨ��constexpr��ȷ���ǳ������ʽ
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
//	auto c = cr;     //int  ��cr��ci�ı�����ci������һ������const��
//	auto d = &i;     //int*
//	auto e = &ci;    //const int* - Ҫȷ��ci����ͨ��ָ��ı䣨�������óɵײ�const��
//	auto& g = ci;    //cont int& 
//
//
//	a = 42;   //����a���ĳ�42
//	b = 42;   //����b���ĳ�43
//	c = 42;   //����c���ĳ�42
//	//d = 42;   //����ָ�벻���޸ĳ����
//	//e = 42;     //����e��const int*�������޸�
//	//g = 42;     //g��ci�����������޸�
//}
//
//
//
//int main()
//{
//	const int i = 42;
//	//cout << typeid(i).name() << endl;
//
//	auto j = i;    //int����
//	const auto& k = i;    //const int&
//	auto* p = &i;    //const int*
//	const auto j2 = i, & k2 = i;    //j2��const int ���� k2��const int& 
//	
//	return 0;
//}


//c++11 - decltype

//int main()
//{
//	int i = 42;
//	int* p = &i;
//	int& r = i;
//	decltype(*p) c = i;    //p��ָ��*p����ָ����ָ�Ķ���ָ����ָ�Ķ�������;�����������
//	decltype(r + 1)d = 5;   //r���������ͣ���1�Ժ�Ľ������������ ����d��int����
//
//	decltype(i)e = 50;   //i��������int������e��int���͵�
//	decltype((i))f = i;   //i�Ա������ţ�����decltype�е���һ�����ʽ�����ʽi�Ľ����int&
//
//	return 0;
//}

//2.5.3��ϰ
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
//	decltype(a) c = a;   //��ʱauto��decltype��һ������ ����int
//
//	const int A = 0;
//	auto d = A;    //d��int���ͣ�����const������
//	decltype(A) e = A;   //e��const int����
//	return 0;
//}
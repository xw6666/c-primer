# 第三章笔记
**<mark>由于本章节涉及很多指针和数组的知识，笔者之前的有过c语言基础，所以这部分知识不做重复的笔记。</mark>**
- 命名空间的using声明，通过using声明，可以做到省去很多重复劳动。

```cpp
//正常情况下
std::cout << "Hello world!" << endl;
```
当使用了using声明之后可以不写std

```cpp
#include <iostream>
using std::cout;    //using 声明
int main()
{
	cout << "Hello world!" << endl;   //省略了std::
	
	return 0;
}
```
 - string的初始化方式


```cpp
string s1;   //默认初始化，s1是一个空串
string s2(s1);   //通过拷贝构造函数，s2是s1的副本
string s2 = s1;  //等价上面
string s3("Hello world!");
string s4 = "Hello world!";
string s5(n, 'c');    //在string里面放入n个'c'  
```

 - 通过getline函数可以读取一整行


```cpp
int main()
{
	string line;
	while(getline(cin, line))
	{
		//读取一整行并输出
		cout << line << endl;
	}

	return 0;
}
```

- string的empty，size和length函数。
1. empty函数可以判断string是否为空串，<mark>如果是空串，则返回true</mark>。

```cpp
int main()
{
	string str;

	if(str.empty())
	{
		cout << "str是空串" << endl;
	}
	else
	{
		cout << "str不是空串" << endl;
	}


	return 0;
}
```
2. size函数和length函数返回的是字符串的长度，在我的vs中，这个返回值是size_t类型：
![在这里插入图片描述](https://img-blog.csdnimg.cn/35feacc9773d43c5930a48c08187c152.png#pic_center)
通过转到定义，可以查到*size_t*其实就是*unsigned int*类型：
![在这里插入图片描述](https://img-blog.csdnimg.cn/f7a970fd3a43494ca7ee477f888cc3ab.png#pic_center)
 - C++11范围for语句，举一个例子来使用范围for语句去打印字符串中的每一个字符


```cpp
int main()
{
	string str("Hello world!");
	//通过冒号隔开，左边是循环变量，右边是要循环遍历的东西
	for(auto& i : str)
	{
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
}
```

- vector可以理解为一个封装过的数组，支持尾插，尾删和随机访问等系列功能。
 - vector初始化方式：
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/0c563afadc314148bb8dead02d371aa3.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)
 - C++中的列表初始化同样可以初始化vector


```cpp
vector<int> ivec{ 1,2,3,4,5 };   //将1 2 3 4 5这五个元素放入vector容器中
```

 - 通过*push_back*函数向vector中添加元素。


```cpp
int main()
{
	vector<int> ivec;
	for(int i = 0;i < 5;i++)
	{
		ivec.push_back(i);   //将i添加进vector中
	}

	return 0;
}
```
 - 对应的，通过*pop_back*函数去删除vector中的最后一个元素。


```cpp
int main()
{
	vector<int> ivec;
	for(int i = 0;i < 5;i++)
	{
		ivec.push_back(i);   //将i添加进vector中
	}
	
	ivec.pop_back();
	//到这里此时ivec中只有0 1 2 3四个元素

	return 0;
}
```

 - vector其他操作：
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/ae89b2c095db4d23bef126faf15b327e.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)

 - 初始化深入剖析
 1. vector使用圆括号进行初始化，当传入两个参数时，第一个参数是数字，第二个参数的类型是这个容器中元素类型，初始化结果为*数字个第二个参数*，例如：


```cpp
vector<int> ivec(10,42);  //ivec中放入了10个42
vector<string> svec(10, "hi"); //svec中放入了10个"hi"
```



2. vector使用C++11列表初始化时，有区别，例子如下：

```cpp
vector<int> ivec{10, 20};   //注意这时候ivec中只有两个元素，10和20
vector<string> svec{10, "hi"};  //而这里还是放入了10个"hi"
```

 - 迭代器(*iterator*)，暂时把它理解成指针，通过解引用和成员访问操作符去访问容器中的元素。
通过auto关键字，我们可以看到迭代器的类型：

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/c14108178a3f417b9a0f335a6c57e98d.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/74757099b6894de8b9ce2af1a7c7e141.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)
可以知道容器里的元素不同，这个迭代器的类型也不同。

 - 通过迭代器遍历容器。

```cpp
int main()
{
	vector<int> ivec(10, 1);
	for (vector<int>::iterator it; it != ivec.end(); it++)
	{
		cout << *it << " ";
	}
	
	return 0;
}
```
注意上面的循环，中间的添加判断用的是不等于，这是因为有些迭代器可能不支持大于小于的比较，所以这里统一用不等于不做区分。

 - C++11中引入了begin和end函数，这两个函数分别返回两个指针，如果用在数组名身上，begin返回的是首元素的地址，而end返回的是最后一个元素的地址+1。


```cpp
//begin与end函数演示
int main()
{
	int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* beg = begin(nums);   //begin返回了首元素的地址
	int* last = end(nums);    //last的地址是元素9往后加一对应的地址

	//像使用迭代器一样使用
	while(beg != last)
	{
		cout << *beg << " ";
		beg++;
	}

	return 0;
}
```

**第三章完**
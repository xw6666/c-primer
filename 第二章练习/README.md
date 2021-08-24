# 第二章笔记

 - C++算术类型
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/60c4b99c1952452396c14f9c3a8683ba.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)

其中<mark>char16_t 和 char32_t 是为Unicode（是用于表示所有自然语言中字符的标准）字符集服务。

 - 类型转换
 1. 当把非布尔类型赋值给布尔类型时，如果结果是0则为false，<mark>非0则为true</mark>。

```cpp
int a = 3;
bool temp = a;   //temp的值为true
```

 2. 当把布尔值赋值给非布尔值时，如果赋过去的是false则结果为0，是true则结果为1。


```cpp
bool a = true;
bool b = false;
int c = a;  //c的值是1
int d = b  //d的值是0
```
3. 当把浮点数赋值给整数时，发生截断，不是四舍五入。

```cpp
double a = 5.89;
int b = a;    //此时a的值为5，而不是6
```
4. 当赋给无符号数一个超过它范围的值的时候，结果是对它的范围 + 1取模得到的余数，可以理解 为是一个循环，比如unsigned char 类型最大值是255，当给256时，结果是对256取模也就是0，可以理解为溢出以后又从最小值开始继续计算。

```cpp
unsigned char a = 257;
cout << a << endl;   //这里输出的a为1
```
5. 当给带符号数赋一个超过它范围的值时候，这种情况是未定义的，在我的vs上，情况和第4点差不多，都是像一个轮回，最大值+1变成最小值。

- 当一个算数表达式既有无符号数又有int类型时，int会被自动转换成无符号类型。

```cpp
int i = -42;
unsigned u = 10;
cout << u + i << endl;  //此时i被转换成无符号类型，表达式输出(UINT_MAX - 31)
```
- 指定字面值的类型
通过添加前缀或者后缀去指定字面值的类型，例如

```cpp
int month = 07;   //month是8进制的7
int a = 0x9;   //a是16进制的9
float b = 1.6f;
```
给出指定字面值的类型表：
![在这里插入图片描述](https://img-blog.csdnimg.cn/df469cd54564442f900bbcd8eaa763ef.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)



- 列表初始化：<mark>C++11</mark>中可以用花括号去初始化变量。

```cpp
int a = { 0 };
float b = { 1.6f };
```
值得注意的是，<mark>当使用列表初始化时初始值存在丢失信息的风险时，编译器会报错</mark>，例如拿浮点数去通过列表初始化初始正型变量

```cpp
int c = { 5.20 }   //错误
```


- C++变量有声明和定义，可以区分开，声明让编译器知道有这个东西，定义负责创建与这个变量名字相关的实体。
1. 如果想声明一个变量但是不定义，在变量名前加**extern** ，而且不能显示初始化这个变量。

```cpp
extern int a;    //声明但是没有定义变量
int i = 0;       //声明且定义变量
extern int b = 10; //声明且定义了变量，这时候赋值就把extern的作用抵消了
```


- C++标识符
1. C++标识符由字母，数字，下划线组成，必须由字母或者下划线开头，区分大小写。
2. 用户自定义的标识符不能连续出现两个下划线。
3. 用户自定义的标识符下划线不能紧跟着大写字母。
4. 函数体外的标识符不能以下划线开头。


 - 变量命名规范
 - 要体现实际意义
 - 一个单词用小写字母组成，如index,不要写成Index或者INDEX
 - 类名大写字母开头，驼峰命名法


 - C++关键字（暂时了解）
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/4741bffb10074690a2c8d24c9fcf438b.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU1NzgzNzQw,size_16,color_FFFFFF,t_70)

- 引用，理解为为操作对象起了个别名。

```cpp
int a = 10;
int& b = a;   //这时候b就是a的别名，共用这同一块空间

int c = 30;
int d = c;  //d只是把c空间中的值拷贝了一份放到自己空间
```


- const操作符

1. const修饰变量，变量不可改变。

```cpp
const int a = 10;
a = 20;   //错误，a现在不能被改变了
```
2. const修饰引用，形成常量引用。

```cpp
const int i = 10;
const int& a = i;   //常量引用，a的值不可改变

a = 20;   //错误，a是常量引用，值不能改变
int& b = i;   //错误，必须要是常量引用，从逻辑来说，i不可改变，如果通过普通引用的方式又可以把i改变，那么就矛盾了 
```
3. const的引用允许使用任意表达式做初始值，比如一个常量，只要引用是对应的类型就好。

```cpp
int i = 42;
const int& r1 = i;   //没问题，i是可以变的，但是通过r1不能改变i，逻辑上行得通
const int& r2 = 42;  //没问题，常量引用
int& r3 = r1;        //错了，r1是不能被改变的，这种举动相当于绕过r1的常量引用去改变r1，有问题
```

4. 顶层const与底层const
顶层const就是const修饰后，这个变量存放的东西是不会变的，而底层const就是指向的对象是不会被改变的，举个例子：

```cpp
char ch = 'A';
char* const p1 = &ch;   //此时的const修饰p，p是一个指针，指针存放的是地址，地址不能被改变，也就是指针指向不能变,为顶层const

const char* p2 = &ch;  //此时const修饰*p,p存放的地址是可以变的，但是p解引用得到的值是不能被改变的，这就是底层const
```


```cpp
int i = 0;
int* const p1 = &i;   //顶层const
const int ci = 10;    //顶层const
```
注意的是，<mark>用于声明引用的const都是底层const，因为引用的意义就是“指向的对象”。</mark>



- auto类型：自动给你的变量推出一个类型，<mark>前提是要推出，不能有二义性</mark>。

```cpp
int i = 0;
auto b = i;   //auto自动推断b是int型
```
1. 当一个变量被const修饰时，如果不是想用引用，顶层const会没用。

```cpp
const int a = 10;
auto b = a;   //b的类型是int而不是const int
//很容易就能理解，我只是把a的值拷贝到b，怎么改b的值，a的值都不会被改变，默认没有必要上const
```

2. 当设置一个auto类型的引用时，顶层const会被保留。

```cpp
const int a = 10;
auto& b = a;     //b的类型是const int&
//因为引用如果没有const的话，那是可以通过b去改变a的，有毛病！
```

```cpp
//auto案例
const int i = 10;
auto j = i;                   //j为int类型
const auto& k = i;            //k为const int&类型 
auto* p = &i;                 //p为int*类型
const auto j2 = i, &k2 = i;   //j2为const int类型，k2为const int&类型
```


- C++11 decltype类型指示符
1. decltype()括号内可以填入一个变量或者表达式。
2. 如果填入的是变量，那么这个东西的类型就是填入的变量的类型。

```cpp
int a = 10;
decltype(a) b = 20;    //b与是a那个类型，也就是int
```

3. 如果填入的是表达式，那么这个东西的类型就是填入表达式的<mark>结果</mark>的类型。

```cpp
int i = 0;
int *p = &i;
int& r = i;
decltype(r + 1) a;   //a的类型是r+1结果的类型，是int不是int&
decltype(*p) = i;    //i的类型是*p的结果，也就是指向的对象，是引用类型，所以是int&
```
值得注意的是：<mark>`decltype((i)) a = i;`这里的括号内是(i)，实际上是一个表达式，该表达式的结果是i这个对象，实际上也属于“指向的对象”，所以a的类型是int&。</mark>

**第二章完**


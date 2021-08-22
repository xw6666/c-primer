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

**...持续更新中**

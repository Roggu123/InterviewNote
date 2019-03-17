# <center>第1章 DataFormat</center>
数据类型总结
-------------------
## 1.1 数据类型总览
+ 变量  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;变量其实只不过是程序可操作的存储区的名称。类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;变量可以在三个地方被定义：1.在函数或一个代码块内部声明的变量，称为局部变量；2.在函数参数的定义中声明的变量，称为形式参数；3.在所有函数外部声明的变量，称为全局变量。  
[表格](http://www.runoob.com/cplusplus/cpp-variable-types.html)
+ 数组  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;数组的声明并不是声明一个个单独的变量，比如 number0、number1、...、number99，而是声明一个数组变量，比如 numbers，然后使用 numbers[0]、numbers[1]、...、numbers[99] 来代表一个个单独的变量。数组中的特定元素可以通过索引访问。所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素。
+ 指针  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。
所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

## 1.2 指针与数组
### 1.2.1 比较总结   
char *a = "hello" 中的a是指向第一个字符‘a'的一个指针；  
char a[20] = "hello" 中数组名a也是执行数组第一个字符‘h’的指针；  
但二者并<font color=#FF0000>不相同</font>：

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;字符指针a指向的内容存放在常量区，不可改变，长度在编译时固定（即定义时确定），详情见图一，二；  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;而数组名a指向的内容存放在栈，可以改变，但是不能超出定义时的长度太多，否则会报错；长度在运行时确定（即输入时才确定），但通过sizeof()输出长度时时定义长度，详情见图三，四，五；
  
![Alt text](./1.png)
<center>图一</center>
![Alt text](./2.png)  
<center>图二</center>
![Alt text](./3.png)
<center>图三</center>
![Alt text](./4.png)  
<center>图四</center>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;将d的长度再扩大一些，观察输出结果（超出s的长度太多会报错）：

![Alt text](./5.png)
<center>图五</center>

### 1.2.2 参考
[char *a 与char a[] 的区别和char** argv与char *argv[]区别](https://blog.csdn.net/u011068702/article/details/52588455)  

## 1.3 向量（Vector）与数组
### 1.3.1 比较总结
补充：数组可以从输入流中读入数据，而向量不可以
### 1.3.2 参考
[char *a 与char a[] 的区别和char** argv与char *argv[]区别](https://blog.csdn.net/u011068702/article/details/52588455) 

## 1.4 字符串与字符变量
+ 本质区别

1. char属于基础类型（C++)，char类型的长度是固定的，在C++中它可能是1个字节，或者2个字节（取决于是否为Unicode Char）。

2. string是一个模板类型，也就是一个class（C++)。string的长度是无法明确取得的。也就是无法通过sizeof来取得，因为它不是一个基础类型，它本身并不固定长度，而取决于内部包含的字符。

+ string存储类型

1. string中每个字符都用2个字节保存

2. string的最后还有一个特殊的字符，是不可见的，\0 。它也是占两个字节

3. string的大小是不可以通过sizeof来获得的。如果尝试通过sizeof取得string的大小，会遇到编译错误

## 1.5 不同类型的数据的存储方式
动态存储区分为堆和栈。都是程序执行的过程中动态分配的，大小也随之动态变化。从内存管理的实现的角度看来，堆使用的链表实现的，而栈使用的是线性存储的方法。  
全局变量存储在静态存储区中，  
静态变量（有`static`修饰）存储在静态存储区中，  
局部变量存储在动态存储区中，  
字符指针存储在静态存储区中，
### 1.3.2 参考
(堆和栈比较)  
[动态存储和静态存储区域区别](https://blog.csdn.net/guosir_/article/details/78648064)  
[C/C++堆、栈及静态数据区详解
](http://www.cnblogs.com/hanyonglu/archive/2011/04/12/2014212.html)  
(内存占用)  
[c++ 基本数据类型总结](https://blog.csdn.net/hf19931101/article/details/49491747)


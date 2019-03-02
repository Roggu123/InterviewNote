# <center>第1章 Input&Output</center>
## 输入输出函数对比总结
## 1.1 Input输入函数
### 1.1.1 对比总结   
**`cin`**&nbsp;&nbsp;可以为<font color=#0000ff>**变量，字符串，字符数组a(a是指向数组首字母的指针)**</font>赋值，但无法为指针、数值数组赋值；  
<font color=#FF0000>猜想（1）？：cin只可以输入到栈(即动态存储中)？</font>  
<font color=#FF0000>猜想（2）？：变量是什么？与指针对比。</font>  
<font color=#FF0000>猜想（3）？：变量,字符串，字符数组为动态存储？指针，数值数组为静态存储？</font>  
**`cin.get()`**&nbsp;&nbsp;可以为<font color=#0000ff>**字符变量，字符数组，字符指针**</font>赋值，为数组和指针赋值时要指定长度；  

**`cin.getline(<#char_type *__s#>,<#streamsize __n#>)`**&nbsp;&nbsp;可以为<font color=#0000ff>**字符数组，字符指针**</font>赋值，赋值时要指定长度；  
<font color=#FF0000>猜想（4）？：字符串与字符等变量在存储本质上的区别？</font>  
<font color=#ff0000>猜想（5）？：一段程序中不可以使用两个`cin.getline()`或`cin.get()`吗？可以与猜想（1）联系解决。</font>  
**`getline(<#basic_istream<_CharT, _Traits> &__is#>,<#basic_string<_CharT, _Traits, _Allocator> &__str#>)`**&nbsp;&nbsp;可以为字符串（String）赋值，<font color=#0000FF>**且只可以为字符串赋值**</font>；
  
**`gets(char *)`**&nbsp;&nbsp;可以为字符数组赋值，**<font color=#0000FF>且只可以为字符数组赋值</font>**，会提示不安全，不常用；

通常单词读取用`cin`而行读取用`cin.get()`和`cin.getline()`;
### 1.1.2 `cin.get()`与`cin.getline()`详细总结


### 1.1.3 参考 
1. [C++中cin、cin.get()、cin.getline()、getline()、gets()等函数的用法](https://www.cnblogs.com/flatfoosie/archive/2010/12/22/1914055.html) 
2. [C++ cin.get()和cin.getline()方法详解及区别](https://blog.csdn.net/Kellery/article/details/73353778)




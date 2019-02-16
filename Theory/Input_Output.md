# <center>第1章 Input&Output</center>
## 输入输出函数对比总结
## 1.1 Input输入函数
### 1.1.1 对比总结   
**`cin`**&nbsp;&nbsp;可以为变量赋值，字符串，字符数组a(a是指向数组首字母的指针)赋值，但无法为指针、数值数组赋值；  
<font color=#FF0000>猜想？：cin只可以输入到栈(即动态存储中)。</font>  
<font color=#FF0000>猜想？：变量是什么？与指针对比。</font>  
<font color=#FF0000>猜想？：变量,字符串，字符数组为动态存储？指针，数值数组为静态存储？</font>  
**`cin.get()`**&nbsp;&nbsp;可以为<font color=#0000ff>**字符变量，字符数组，字符指针**</font>赋值，为数组和指针赋值时要指定长度；  

**`cin.getline(<#char_type *__s#>,<#streamsize __n#>)`**&nbsp;&nbsp;可以为<font color=#0000ff>**字符数组，字符指针**</font>赋值，赋值时要指定长度；  
<font color=#FF0000>字符串与字符等变量在存储本质上的区别？</font>  
**`getline(<#basic_istream<_CharT, _Traits> &__is#>,<#basic_string<_CharT, _Traits, _Allocator> &__str#>)`**&nbsp;&nbsp;可以为字符串（String）赋值，<font color=#0000FF>**且只可以为字符串赋值**</font>；
  
**`gets(char *)`**&nbsp;&nbsp;可以为字符数组赋值，**<font color=#0000FF>且只可以为字符数组赋值</font>**，会提示不安全，不常用；

### 1.1.2 参考 
[C++中cin、cin.get()、cin.getline()、getline()、gets()等函数的用法](https://www.cnblogs.com/flatfoosie/archive/2010/12/22/1914055.html)  

1. Input & Output---------------------输入输出函数对比总结;
2. Test2---------------------------------计算字符个数;
3. SearchTest-------------------------查找算法;折半查找；
4. Test4---------------------------------将输入数字分别存放到数组中;  
5. Min's RandomNumber----------小明的随机数;
6. SubstringMatch-------------------判断短字符串中的所有字符是否在长字符串中全部出现  


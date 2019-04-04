# Record
研究该问题的记录    
## 2.1 问题记录
### 2.1.1 输入
1. 如何通过输入为字符指针`char* pLongString`赋值?  
**思路**：
 + 直接通过输入函数为其赋值，参考[C++中cin、cin.get()、cin.getline()、getline()、gets()等函数的用法](https://www.cnblogs.com/flatfoosie/archive/2010/12/22/1914055.html)；
 + 通过定义字符串`String LongString`或数组`char 
 LongString[]`等，然后间接赋值；  
 
 **结果及分析**：
   
 + 无法通过`cin >>`为字符指针赋值，参考文档[../Theory/Input&Output.md](../Theory/Input&Output.md);
 + 可以通过`cin.get()`为字符指针赋值，但要指定长度，同参考上述文档；  
 + 可以通过`cin.getline()`为字符指针赋值，但要指定长度，同参考上诉文档；
 + 无法通过`getline()`为字符指针赋值，同参考上述文档；
 + 无法通过`gets()`为字符指针赋值，同参考上述文档；
 
 + `String`因类型不匹配，字符串指针赋值给字符指针,报错  
 `Assigning to 'char *' from incompatible type 'std::__1::string *' `；
 + `char LongString[]`运行通过，字符指针赋值给字符指针，存储由栈转为常量区。


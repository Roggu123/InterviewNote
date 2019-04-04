# <center>All_Substring</center>  
## 1.1 题目描述
**题目**：  
给定一个字符串，输出所有指定长度为n的子串，没有则输出-1  
**输入描述**：
  
````
输入第一行一个字符串，如：“1234567890”

输入第二行一个数字是n，如5
````

**输出描述**：

````
输出所有长度为n的子串，如“12345”，“23456”，“34567”，
“45678”，“56789”
````
**示例** 
 
输入

````
123456789
5
````
输出

````
12345 23456 34567 45678 56789
````

## 1.2 解答
### 1.2.1 题目解析
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;题目要求字符串长度为n的连续子串。题目较为简单，考察**求子集**。思路如下：

````
1. 输入字符串str和要求长度n；
2. 判断输入是否符合要求，即n不小于1，n不大于str长度；
3. 输入不合要求输出-1，结束；
4. 输入符合要求，循环截取字符串长度为n的连续子串并输出；
````
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;C++代码实现：

````c++
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    int n,len;
    cin >> str;
    cin >> n;
    if(n<1 || n>str.size())
        cout << -1 << endl; 
    else
        for(int i=0;i<str.size()-n+1;i++)
        {
            cout << str.substr(i, n) << " ";
        }
​}
````

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Java代码实现：

````java
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        String a = sc.nextLine();
        int len = sc.nextInt();
        sc.close();
        if(a.length()<len||len<1){
            System.out.print("-1");
            return;
        }
        for(int i=0;i<=a.length()-len;i++){
            System.out.print(a.substring(i,i+len)+" ");
        }
    }
}
````
## 1.3 参考
[C++基础-string截取、替换、查找子串函数](https://www.cnblogs.com/catgatp/p/6407788.html)  
[C++ string类型的字符串长度获取的三种方法](https://blog.csdn.net/fanyun_01/article/details/79122843)  

//
//  main.cpp
//  CountChar
//
//  Created by Ruogu Lu on 2019/1/3.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//

/**题目描述
 写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
 
 输入描述:
 输入一个有字母和数字以及空格组成的字符串，和一个字符。
 
 输出描述:
 输出输入字符串中含有该字符的个数。
 
 示例1
 输入
 ABCDEF A
 输出
 1
 */

#include <iostream>

using namespace std;
int main(){
    int count,i;
    string str;
    char c;
    cout<<"Input the string"<<endl;
    cin>>str>>c;                                       //cin可以读取字符串，空格作为不同输入间分隔
    for(i=0;i<str.length();i++)
    {
        if((str[i]-c==32||str[i]-c==-32)||str[i]==c)   //if语句中的判断条件只能有两个，如果多于两个，用括号进行分
            count++;                                        //割，否则报错Expression is not assignable
    }
    cout<<count<<endl;
    return 0;
}

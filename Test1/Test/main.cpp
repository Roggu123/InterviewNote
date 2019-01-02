//
//  main.cpp
//  Test
//
//  Created by Ruogu Lu on 2018/12/30.
//  Copyright © 2018 Ruogu Lu. All rights reserved.
//

//*题目描述
//计算字符串最后一个单词的长度，单词以空格隔开。   ***题目分解为两个条件，1.是否最后； 2.是否空格
//输入描述:
//一行字符串，非空，长度小于5000。
//输出描述:
//整数N，最后一个单词的长度
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int count=0, flag=1;
    string str;
    cout<<"Input string"<<endl;
    getline(cin,str);
    for(int i=str.length()-1;i>=0;i--){
        if(flag && str[i]==' ') continue;
        else if(str[i]!=' ') {
            count++;
            flag=0;
        }
        if(!flag && str[i]==' ') break;
    }
    cout<<count<<endl;
    return 0;
}
/*
 Input string
 dddd ddd efef fdsf sfgsfd gdfgdfgdfgd dfgdfgdfgdfgdfgdfg
 18
 */

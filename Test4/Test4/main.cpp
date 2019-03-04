//
//  main.cpp
//  Test4
//
//  Created by Ruogu Lu on 2019/1/7.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//
/**
 *在屏幕中输入一行数字，以空格分隔，其中每个数字的长度不一定一样，要求将这些数字分别存放到数组中
 *例如
 输入：1 123 1234 22 345 25 5
 对应数组的值应该为a[0]=1,a[1]=123,a[2]=1234,a[3]=22,a[4]=345,a[5]=25,a[6]=5;
 *
 *问题难点：输入的一串字符中找到连续的数字作为一个数值，保存到数组中
 */

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[50];
    char c;
    int i=0;
    cout<<"input value"<<endl;
    while((c=getchar())!='\n'){
        if(c>='0'&&c<='9'){
            ungetc(c, stdin);//int ungetc(int char, FILE *stream) 把字符 char（一个无符号字符）推入到指定的流 stream 中，以便它是下一个被读取到的字符
            cout<<"value of c"<<endl;
            cout<<c<<endl;
            cin>>a[i++]; //cin将第一个数据全读入，直到遇到空格
            cout<<a[i]<<endl;
        }
        else
            cout<<"kongge"<<endl;
    }
    cout<<"results are"<<endl;
    for(int j=0;j<i;j++){
        cout<<"a["<<j<<"]"<<a[j]<<endl;
    }
    
}
 /*
#include "stdio.h"
#include "stdlib.h"
int main(){
    char c;
    int i=0;
    cout<<"input"<<endl;
    while((c=getchar())!='\n'){
        printf("%c,",c);
        cout<<i++<<endl;
    }
    printf("\n");
    system("pause");
    return 0;
}
*/

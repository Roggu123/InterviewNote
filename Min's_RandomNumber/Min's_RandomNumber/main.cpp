//
//  main.cpp
//  Min's_RandomNumber
//
//  Created by Ruogu Lu on 2019/1/5.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//
/**
 题目描述
 明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作(同一个测试用例里可能会有多组数据，希望大家能正确处理)。
 
 
 
 Input Param
 
 n               输入随机数的个数
 
 inputArray      n个随机整数组成的数组
 
 
 Return Value
 
 OutputArray    输出处理后的随机整数
 
 
 
 注：测试用例保证输入参数的正确性，答题者无需验证。测试用例不止一组。
 
 
 
 输入描述:
 输入多行，先输入随机整数的个数，再输入相应个数的整数
 
 输出描述:
 返回多行，处理后的结果
 
 示例1
 输入
 11
 10
 20
 40
 32
 67
 40
 20
 89
 300
 400
 15
 输出
 10
 15
 20
 32
 40
 67
 89
 300
 400
 
 思考
 1.定义数组存储输入，利用cin>>t[i]读取输入
 2.数组读取完毕后利用十大排序法之一排列数组，遇到相等情况删除
 3.利用cout<<t[i]<<endl输出
 
 暴露问题
 1.十大排序算法遗忘
 2.不会按行输出
 */

#include <iostream>
using namespace std;

/**
 int main(int argc, const char * argv[]) {
    int n, m, i,j,temp;
    std::cout<<"Please input the array"<<std::endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //排序
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //去重
    for(i=0;i<n-1;i++){
        m=n;
        if(a[i]==a[i+1]){
            a[i+1]=a[i+2];
            m--;
        }
    }
    cout<<"size of array"<<endl;
    cout<<m-1<<endl;
    cout<<"The real array"<<endl;
    for(i=0;i<m-1;i++)
    cout<<a[i]<<endl;
    return 0;
}
 */
#include "set"
int main(){
    set<int> S;
    int i,n,num;
    cout<<"input the size"<<endl;
    while(cin>>n){
        S.clear();
        cout<<"input the array"<<endl;
        for(i=0;i<n;i++){
            cin>>num;
            S.insert(num);
        }
        set<int>::iterator p;
        cout<<"output the array"<<endl;
        for(p=S.begin();p!=S.end();p++){
            cout<<*p<<endl;
        }
    }
}
        

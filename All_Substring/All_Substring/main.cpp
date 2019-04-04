//
//  main.cpp
//  All_Substring
//
//  Created by Ruogu Lu on 2019/4/4.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//
// conference:[C++基础-string截取、替换、查找子串函数](https://www.cnblogs.com/catgatp/p/6407788.html)

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    int n;
    cout << "Please input string" << endl;
    cin >> str;
    cout << "Please input n" << endl;
    cin >> n;
    if(n<1 || n>str.size())
        cout << -1 << endl;
    else
        for(int i=0;i<str.size()-n+1;i++)
        {
            cout >> str.substr(i, n) >> " ";
        }
    cout << endl;
}

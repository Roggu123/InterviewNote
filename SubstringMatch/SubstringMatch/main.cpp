//
//  main.cpp
//  SubstringMatch
//
//  Created by Ruogu Lu on 2019/2/14.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char LongString[8];
    //int LongString;
    //char LongString;
    //string LongString;
    
    cout << "Input LongString" << endl;
    //cin >> LongString;            //成功
    //cin.get(LongString,8);         //成功
    cin.getline(LongString,4);    //成功
    cin.getline(<#char_type *__s#>, <#streamsize __n#>)
    //getline(cin, LongString);     //无法赋值
    //gets(LongString);             //成功
    cout << "Output LongString" <<endl;
    cout << LongString << endl;
    return 0;

}


//int main(int argc, const char * argv[]){
//    char* pLongString;
//    std::cout << "Assignment pLongString\n";
//    //pLongString = LongString;
//    //cin >> pLongString;           //无法赋值
//    //cin.get(pLongString, 30);     //成功
//    //cin.getline(pLongString,10);  //成功
//    //getline(cin, pLongString);    //无法赋值,编译都通不过
//    //gets(pLongString);            //无法赋值
//    cout << "Output pLongString\n";
//    std::cout << pLongString << endl;
//    return 0;
//}


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
//int main(int argc, const char * argv[]) {
//    char LongString[8];
//    //int LongString;
//    //char LongString;
//    //string LongString;
//
//    cout << "Input LongString" << endl;
//    //cin >> LongString;            //成功
//    //cin.get(LongString,8);         //成功
//    //cin.getline(LongString);    //成功
//    //getline(cin, LongString);     //无法赋值
//    gets(LongString);             //成功
//    cout << "Output LongString" <<endl;
//    cout << LongString << endl;
//    return 0;
//}

//int main(int argc, const char * argv[]){
//    char str1[20];
//    char str2[20];
//    char* str3;
//    cout << "Inpput str1:" << endl;
//    cin.getline(str1,20);
//    cout << "Assignment str3" <<endl;
//    str3 = str1;
//    cout << "Input str2:\n";
//    cin.getline(str2,20);
//    cout << "Output str3 and str2:\n";
//    cout << str1 << endl << str2 << endl;
//}

//方法一：用数组表示52个字母（大写和小写），将数组中出现在长字符串中的字母位置置一，然后检查短字符串，有位置为零则报false
bool IsAllCharExist(char * pShortString, char * pLongString)
{
    /*在这里实现功能*/
    if ((NULL == pShortString) || (NULL == pLongString))
    {
        return false;
    }
    if (("" == pShortString) || ("" == pLongString))
    {
        return false;
    }
    char *pShortTmp = NULL;
    char *pLongTmp = NULL;
    int aHashTb[256] = { 0 };
    memset(aHashTb, 0, sizeof(aHashTb));    // 设置数组aHashTb的所有数组元素为0
    for (pLongTmp = pLongString; *pLongTmp; pLongTmp++)
    {
        aHashTb[*pLongTmp] = 1;             // 字符对应的ASCII码，并将
    }
    for (pShortTmp = pShortString; *pShortTmp; pShortTmp++)
    {
        if (0 == aHashTb[*pShortTmp])
        {
            return false;
        }
    }
    
    
    return true;
}
//int main(int argc, const char * argv[]){
//    char* pLongString;
//    char* pShortString;
//    char pLongStr[20];
//    char pShortStr[20];
//    //cin.get();
//    cout << "Input pLongStr:\n";
//    cin.getline(pLongStr, 20);
//    cout << "Input pShortStr:\n";
//    cin.getline(pShortStr, 20);
//    std::cout << "Assignment pLongString:\n";
//    pLongString = pLongStr;
//    cout << "Assignment pShortString:\n";
//    pShortString = pShortStr;
//    //pLongString = LongString;
//    //cin >> pLongString;           //无法赋值
//    //cin.get(pLongString, 30);     //成功
//    //cin.getline(pLongString,30);  //成功
//    //getline(cin, pLongString);    //无法赋值,编译都通不过
//    //gets(pLongString);            //无法赋值
//    cout << "Output pLongString and pShortString:\n";
//    std::cout << "pLongString: " << pLongString << endl << "pShortString: " << pShortString <<endl;
//    cout << "Result is:" << IsAllCharExist(pShortString, pLongString) << endl;
//    return 0;
//}

//方法二: 依次遍历短字符串和长字符串，若长字符串中找不到当前短字符串遍历的字符则返回false，短字符串遍历完毕，检查遍历次数（若等于短字符串长度，返回true）
//int main()
//{
//    string longstr, shortstr;
//    cout << "Input shortstr and longstr:\n";
//    while(cin >> shortstr >> longstr )
//    {
//        int i;
//        for(i=0;i<shortstr.size();i++)
//        {
//            if(longstr.find(shortstr[i])==-1)
//            {
//                cout << "false" <<endl;
//                break;
//            }
//        }
//        if(i==shortstr.size())
//            cout << "true" << endl;
//    }
//    return 0;
//}

//方法三：有顺序时
int main()
{
    string longstr, shortstr;
    cout << "Input shortstr and longstr:\n";
    while(cin >> shortstr >> longstr )
    {
        if(longstr.find(shortstr)==-1)
        {
            cout << "false" <<endl;
        }
        else
            cout << "true" << endl;
    }
    return 0;
}






//
//  main.cpp
//  Remove
//
//  Created by Ruogu Lu on 2019/3/3.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//

//#include <iostream>
//#include <algorithm>
// #include <vector>
//using namespace std;
//
//
//int main() {
//    vector<int> v;
//    cout << "Number of vector's element : " << endl;
//    int number;
//    cin >> number;
//    for (int i = 0; i < number; i++)
//    {
//        int temp;
//        cin >> temp;
//        v.push_back(temp);
//    }
////    cout<<"Size of array before: "<<v.size()<<endl; //检验数组长度是否变化
//    sort(v.begin(),v.end());
//    v.erase(unique(v.begin(), v.end()), v.end());
//    cout<<"Results are:"<<endl;
//    for (int i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << " ";
//    }
//        cout << endl;
////    cout<<"Size of array after: "<<v.size()<<endl; ////检验数组长度是否变化
//        return 0;
//    }
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <ext/hash_set>
#include <iterator>
using namespace std;
using namespace __gnu_cxx;

//快速排序算法
char* qsort(char array[], int head, int tail)
{
    /*
     * 功能：对数组升序快排，递归实现
     * 参数：lst：带排序数组，head：数组首元素下标，tail：数组末元素下标
     * 返回值：无
     */
    
    if (head >= tail)
        return NULL;
    
    int i = head, j = tail;
    
    char pivot = array[head];  // 通常取第一个数为基准
    
    while (i < j) { // i,j 相遇即退出循环
        while (i < j and array[j] >= pivot)
            j--;
        array[i] = array[j];    // 从右向左扫描，将比基准小的数填到左边
        while (i < j and array[i] <= pivot)
            i++;
        array[j] = array[i];    //  从左向右扫描，将比基准大的数填到右边
    }
    
    array[i] = pivot; // 将 基准数 填回
    
    qsort(array, head, i - 1);    // 以基准数为界左右分治
    qsort(array, j + 1, tail);
    return array;
}

//方法一. 有序数组，不能额外申请空间
void RemoveDuplicates1(char arr[], int n)
{
    int count=1; //count用来标记向去重数组插入元素的位置
    //遍历数组
    for(int i=1; i<n; i++)
    {
        //当数组元素重复时，count标记位置不动，即去重数组需被填充的位置不变
        if(arr[i] == arr[i-1])      //由于是有序数组，重复元素相邻，故可以前后两个元素比较
        {
            continue;
        }
        //数组元素不重复，将不同的元素插入去重数组并将count位置后移一位
        else
        {
            arr[count]=arr[i];
            count++;
        }
    }
    cout << "Output the sortted array: " << endl;
    for(int i=0;i<count;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//方法二， 无序数组，不能额外申请空间，先排序，再调用RemoveDuplicates1
void RemoveDuplicates2(char arr[], int n)
{
    char *a;
    cout << "sort array: ......" << endl;
    //排序
    a=qsort(arr, 0, n-1);
    cout << "Remove: ......" << endl;
    //去重
    RemoveDuplicates1(a, n);
}

//方法三， 无序数组，能够额外申请空间，使用向量
void RemoveDuplicates3(char arr[], int n)
{
    //定义并向向量赋值
    vector<char> arrvector;
    for(int i=0; i<n; i++)
    {
        arrvector.push_back(arr[i]);
    }
    //排序
    cout << "sort array: ......" << endl;
    sort(arrvector.begin(),arrvector.end());
    //去重
    cout << "Remove: ......" << endl;
    arrvector.erase(unique(arrvector.begin(), arrvector.end()), arrvector.end());
    cout << "Output the sortted array: " << endl;
    for(int i=0; i<arrvector.size(); i++)
    {
        cout << arrvector[i] << " ";
    }
    cout << endl;
}

//方法s四， 无序数组，能够额外申请空间，使用hash_set
void RemoveDuplicates4(char arr[], int n)
{
    hash_set<char>harry;    //建立hash_set容器
    harry.clear();          //清空hash_set
    cout << "Remove......" << endl;
    //不进行排序，直接去重
    for(int i=0; i<n; i++)
    {
        if(harry.find(arr[i])==harry.end())
        {
            harry.insert(arr[i]);
        }
    }
    cout << "Output the sortted array: " << endl;
    for(hash_set<char>::iterator itor=harry.begin();itor!=harry.end();itor++)
    {
        cout << *itor << " ";
    }
    cout << endl;
}


//主函数，进行输入，并选择不同方法，对数组中元素去重
int main()
{
    char arr[32];
    char c;
    int i=0;
    int n;
    cout << "Input array below:" << endl;
    //输入需要去重的数组，数组元素用空格区分
    while((c=getchar())!='\n')
    {
        ungetc(c, stdin);
        cin >> arr[i++];
    }
    //进行方法选择
    cout << "i is: " << i << endl;
    cout << "Please choose methods:" << endl;
    cout << "Array in order without space---1" << endl;
    cout << "Array not in order & no space--2" << endl;
    cout << "Array not in order with space--3" << endl;
    cout << "Array not in order with space--4" << endl;
    cin >> n;
    //执行对应方法
    switch (n) {
        case 1:
            RemoveDuplicates1(arr, i);
            break;
        case 2:
            RemoveDuplicates2(arr, i);
            break;
        case 3:
            RemoveDuplicates3(arr, i);
            break;
        case 4:
            RemoveDuplicates4(arr, i);
            break;
        default:
            break;
    }
}




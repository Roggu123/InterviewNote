//
//  main.cpp
//  MergeList
//
//  Created by Ruogu Lu on 2019/4/5.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//

//// 该头文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
//#include <iostream>
//
//// Mac下直接导入头文件<malloc.h>时会报错'malloc.h' file not found,分配长度为num_bytes字节的内存块给某指针[C++ 中malloc函数详解（转载）](https://blog.csdn.net/sinat_27456831/article/details/50834965)
//#include <sys/malloc.h>
//
////vector(向量): C++中的一种数据结构,确切的说是一个类.它相当于一个动态的数组,当程序员无法知道自己需要的数组的规模多大时,用其来解决问题可以达到最大节约空间的目的.
//#include <vector>
//
//using namespace std;
//
//// 定义链表， LNode是结构体变量名（链表名），*Linklist是结构体指针[C++中typedef和类型别名](https://blog.csdn.net/csxiaoshui/article/details/78038799)
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//
//}LNode,*Linklist;
//
#include <iostream>
#include <sys/malloc.h>
#include <vector>
using namespace std;
typedef struct Node{
    int data;
    struct Node* next;
}LNode,*Linklist;
//// 打印输出链表
//void PrintList(Linklist head)
//{
//    Linklist tmp=head;
//    while(tmp!=NULL)
//    {
//
//
//        cout<<tmp->data<<" ";
//        tmp=tmp->next;
//
//    }
//}
//
void PrintList(Linklist head){
    Linklist tmp = head;
    while(tmp != NULL){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
}
//// 创建并返回链表
//Linklist CreatList(Linklist head)
//{
////    head表示链表结构体指针
//    head=(Linklist)malloc(sizeof(struct Node));
////    node和end表示指向链表的指针
//    LNode* node=NULL;
//    LNode* end=NULL;
//    int num;
//    vector<int> vec;
//    head->next=NULL;
//    end=head;
////    cin用于读取数字或字母；cin.get()读取cin读取字符的下一位字符，如果是换行则结束输入，若非空格等非数字或字母的字符则继续
//    while(cin>>num){
//        vec.push_back(num);
//        if(cin.get()=='\n')
//            break;
//
//    }
////    将输入字符存入链表
//    for(int i=0;i<vec.size();i++){
//        node=(Linklist)malloc(sizeof(struct Node));
//        node->data=vec[i];
//        end->next=node;
//        end=node;
//
//    }
//    end->next=NULL;
//    return head;
//}
Linklist CreatLinklist(Linklist head){
//    设置三个指针head(表头),end（链表尾）,node（向链表加入的新结构体）
    head = (Linklist)malloc(sizeof(struct Node));
    LNode* end = NULL;
    LNode* node = NULL;
    int num;
    vector<int> vec;
    head->next = NULL;
    end = head;
    while(cin >> num){
        vec.push_back(num);
        if(cin.get() == '\n')
            break;
    }
//    利用node创建一个新结构体并存入数据，将node连接到end->next指针上（即end的下一位地址），end再移动至下一位
    for(int i = 0; i < vec.size(); i++){
        node = (Linklist)malloc(sizeof(struct Node));
        node->data = vec[i];
//        下面两句话千万不能反了，end->next = node是将node连接到当前end的下一位，end=node是将end移至自己的下一位
        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head;
}
//// 合并链表
//Linklist MergeList(Linklist head1,Linklist head2)
//{
//    Linklist mergeHead=(Linklist)malloc(sizeof(struct Node));
//    if(head1==NULL)
//        return head2;
//    else if(head2==NULL)
//        return head1;
//    if(head1->data<head2->data)
//    {
//        mergeHead=head1;
//        mergeHead->next=MergeList(head1->next,head2);
//
//    }
//    else if (head1->data>=head2->data)
//    {
//        mergeHead=head2;
//        mergeHead->next=MergeList(head1,head2->next);
//
//    }
//    return mergeHead;
//}
Linklist MergeList(Linklist head1,Linklist head2){
    Linklist head3=(Linklist)malloc(sizeof(struct Node));
    if(head1 == NULL)
        return head2;
    else if(head2 == NULL)
        return head1;
    if(head1->data<head2->data){
        head3 = head1;
        head3->next = MergeList(head1->next, head2);
    }
    else{
        head3 = head2;
        head3->next = MergeList(head1, head2->next);
    }
    return head3;
}
//int main()
//{
//    Linklist head1,head2,head3=NULL;
//    head1=CreatList(head1);
//    head2=CreatList(head2);
//    head3=MergeList(head1->next,head2->next);
//    PrintList(head3);
//
//    return 0;
//}
int main(){
    Linklist head1,head2,head3 = NULL;
    head1 = CreatLinklist(head1);
    head2 = CreatLinklist(head2);
    head3 = MergeList(head1->next, head2->next);
    PrintList(head3);
    return 0;
}

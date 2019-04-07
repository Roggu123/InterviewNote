# <center>MergeList</center>  
## 1.1 题目描述
**题目**：  
请编写一段代码，实现两个单向有序链表的合并
**输入描述**：
  
````
第一行一个链表，如1 2 3 4 5

第二行一个链表，如2 3 4 5 6
````

**输出描述**：

````
输出：1 2 2 3 3 4 4 5 5 6
````
**示例** 
 
输入

````
1 2 3 4 5
2 3 4 5 6
````
输出

````
1 2 2 3 3 4 4 5 5 6
````

## 1.2 解答
### 1.2.1 题目解析
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;题目要求将两个单向有序链表合并，考察**链表**，**指针**等知识点。思路如下：

````
1. 输入链表，重点在于读取字符和判断输入结束；
2. 合并链表，重点在于判断链表是否为空，链表数据大小比较，链表指针改变；
3. 输出链表；
4. 针对每个功能定义一个函数；
5. 详细解析见代码注释
````
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;C++代码实现：

````c++
// 该头文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
#include <iostream>

// Mac下直接导入头文件<malloc.h>时会报错'malloc.h' file not found,分配长度为num_bytes字节的内存块给某指针[C++ 中malloc函数详解（转载）](https://blog.csdn.net/sinat_27456831/article/details/50834965)
#include <sys/malloc.h>

//vector(向量): C++中的一种数据结构,确切的说是一个类.它相当于一个动态的数组,当程序员无法知道自己需要的数组的规模多大时,用其来解决问题可以达到最大节约空间的目的.
#include <vector>

using namespace std;

// 定义链表， LNode是结构体变量名（链表名），*Linklist是结构体指针[C++中typedef和类型别名](https://blog.csdn.net/csxiaoshui/article/details/78038799)
typedef struct Node
{
    int data;
    struct Node* next;
    
}LNode,*Linklist;

// 打印输出链表
void PrintList(Linklist head)
{
    Linklist tmp=head;
    while(tmp!=NULL)
    {
        
        
        cout<<tmp->data<<" ";
        tmp=tmp->next;
        
    }
}

// 创建并返回链表
Linklist CreatList(Linklist head)
{
//    设置三个指针head(表头),end（链表尾）,node（向链表加入的新结构体）
    head=(Linklist)malloc(sizeof(struct Node));
//    node和end表示指向链表的指针
    LNode* node=NULL;
    LNode* end=NULL;
    int num;
    vector<int> vec;
    head->next=NULL;
    end=head;
//    cin用于读取非换行符的字符；cin.get()读取cin读取字符的下一位字符，如果是换行则结束输入
    while(cin>>num){
        vec.push_back(num);
        if(cin.get()=='\n')
            break;
        
    }
//    将输入字符存入链表
//    利用node创建一个新结构体并存入数据，将node连接到end->next指针上（即end的下一位地址），end再移动至下一位
    for(int i=0;i<vec.size();i++){
        node=(Linklist)malloc(sizeof(struct Node));
        node->data=vec[i];
//        下面两句话千万不能反了，end->next = node是将node连接到当前end的下一位，end=node是将end移至自己的下一位
        end->next=node;
        end=node;
        
    }
    end->next=NULL;
    return head;
}
// 合并链表
Linklist MergeList(Linklist head1,Linklist head2)
{
    Linklist mergeHead=(Linklist)malloc(sizeof(struct Node));
    if(head1==NULL)
        return head2;
    else if(head2==NULL)
        return head1;
    if(head1->data<head2->data)
    {
        mergeHead=head1;
        mergeHead->next=MergeList(head1->next,head2);
        
    }
    else if (head1->data>=head2->data)
    {
        mergeHead=head2;
        mergeHead->next=MergeList(head1,head2->next);
        
    }
    return mergeHead;
}

int main()
{
    Linklist head1,head2,head3=NULL;
    head1=CreatList(head1);
    head2=CreatList(head2);
    head3=MergeList(head1->next,head2->next);
    PrintList(head3);
    
    return 0;
}
````
## 1.3 参考
[C++ 中malloc函数详解（转载）](https://blog.csdn.net/sinat_27456831/article/details/50834965)   
[C++中typedef和类型别名](https://blog.csdn.net/csxiaoshui/article/details/78038799)  
[C语言结构体和指针](http://c.biancheng.net/cpp/html/94.html)  
[cin.get()和system("pause")](https://blog.csdn.net/qq20004604/article/details/50152533)  
有关赋值的一些问题[结构体中指针赋值问题的分析及C代码示例](https://blog.csdn.net/zhouzhaoxiong1227/article/details/51892960) 

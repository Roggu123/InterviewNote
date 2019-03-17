//
//  main.cpp
//  Subset
//
//  Created by Ruogu Lu on 2019/3/2.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//

#include <iostream>
using namespace std;

////非递归方法
//void show_allSubSet1(char arr[],int n)
//{
//    int i, j, total, mask;
//    if(n>30){
//        cout<<"It is too big"<<endl;
//    }
//    total=(1<<n);
//    for(j=0; j<total; j++)
//    {
//        i=0;
//        printf("{");
//        mask=j;
//        while(mask>0)
//        {
//            if(mask&1)
//                printf("%c",arr[i]);
//            mask>>=1;
//            i++;
//        }
//        printf("}\n");
//    }
//}

void show_allSubSet1(char arr[], int n)
{
    int total=(1 << n);
    for(int j=0; j<total; j++)
    {
        int mask=j;
        int i=0;
        cout << "{";
        while(mask>0)
        {
            if(mask & 1)
                cout << arr[i] <<" ";
            mask >>=1;
            i++;
        }
        cout << "}" << endl;
    }
}

//递归方法
void show_allSubSet2(char arr[],int tag[],int t,int n)
{
    if(t==n)
    {
        cout<<"{";
        for(int i=0;i<n;i++)
        {
            if(tag[i]==1)
                cout<<arr[i]<<" ";
        }
        cout<<"}"<<endl;
        return;
    }
    tag[t]=0;
    show_allSubSet2(arr, tag, t+1, n);
    tag[t]=1;
    show_allSubSet2(arr, tag, t+1, n);
}

int main(int argc, const char * argv[]) {
    
    int n=0;  //求n个元素的所有子集。
    char arr[32];
    int i=0;
    char c;
    std::cout<<"Input the aray"<<std::endl;
    while((c=getchar())!='\n')
    {
        ungetc(c, stdin);
        std::cin>>arr[i++];
        n++;
    }
    int tag[n];
//    for (i=0;i<n;i++)
//        arr[i]=i+1;  //arr表示一个集合，共有n个元素
//    std::cout<<"Output the array"<<std::endl;
//    cout<<"There are "<<n<<" items."<<endl;
    cout<<"Output all subset"<<endl<<endl;
    cout<<"First Methods:"<<endl;
    show_allSubSet1(arr, n);
    cout<<"Second Methods:"<<endl;
    show_allSubSet2(arr, tag, 0, n);
    
    return 0;
}



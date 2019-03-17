//
//  main.cpp
//  ArraySort
//
//  Created by Ruogu Lu on 2019/3/7.
//  Copyright © 2019 Ruogu Lu. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(char arr[], int i, int j)
{
    char temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSort(char arr[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(arr, i, j);
        }
    }
}

void SelectSort(char arr[], int n)
{
    int i, j, index;
    for(i=0;i<n;i++)
    {
        index = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[index]>arr[j])
            {
                index = j;
            }
        }
        if(index!=i)
        {
            swap(arr, index, i);
        }
    }
}

void InsertSort(char arr[],int n)
{
    for(int j=1; j<n; j++)
    {
        char key = arr[j];
        int i=j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    
}

void MergeSort(char arr[], int n)
{
    cout << "Wait for developting"<<endl;
    cout << "......" << endl;
    cout << "...." << endl;
    cout << ".." << endl;
    cout << "." << endl;
}

void QuickSort(char arr[], int l, int r)
{
    if(l<r)
    {
        int i=l,j=r;
        char c=arr[l];
        while(i<j)
        {
            while(i<j && arr[j]>c)
                j--;
            if(i<j)
                arr[i++]=arr[j];
            while(i<j && arr[i]<c)
                i++;
            if(i<j)
                arr[j--]=arr[i];
        }
        arr[i]=c;
        QuickSort(arr, i+1, r);
        QuickSort(arr, l, i-1);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char arr[32];    //array
    int i=0;          //flag
    int n;
    char c;
    int t;           //selection
    cout << "Please input array!\n";
    while((c=getchar())!='\n')
    {
        ungetc(c, stdin);
        cin >> arr[i++];
    }
    n=i;
    cout << "Select sort function:"<<endl;
    cout << "BubbleSort--1" << endl;
    cout << "SelectSort--2" << endl;
    cout << "InsertSort--3" << endl;
    cout << "MergeSort---4" << endl;
    cout << "QuickSort---5" << endl;
    cin >> t;
    //执行对应方法
    switch (t) {
        case 1:
            BubbleSort(arr, i);
            break;
        case 2:
            SelectSort(arr, i);
            break;
        case 3:
            InsertSort(arr, i);
            break;
        case 4:
            MergeSort(arr, i);
            break;
        case 5:
            QuickSort(arr, 0, n-1);
        default:
            break;
    }
    cout << "Output sorted array:\n";
    cout << "{ ";
    for(i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "}\n";
    return 0;
}

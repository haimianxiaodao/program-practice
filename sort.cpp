#include <iostream>
//#include <fstream>
#include <string.h>
#include <vector>
#include <math.h>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <unordered_set>
#include <queue>

//#include "stack.h"
//#include "tree.h"
//#include "queue.h"
//#include "heap.h"
using namespace std;


void bubblesort(int  a[],int counts){
    int i,j,temp;
    for(i=counts-1;i>0;i--){
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return ;
}//冒泡排序

void quiksort(int a[],int left, int right){
    if(left<right){
        int i=left,j=right,x=a[left];
        while(i<j){
            while(i<j && a[j]>=x)
                j--;
            if(i<j)
                a[i++]=a[j];
            while(i<j && a[i]<x)
                i++;
            if(i<j)
                a[j--]=a[i];
        }
        a[i]=x;
        quiksort(a,left,i-1);
        quiksort(a,i+1,right);
    }
    //return ;
}//快速排序

void insertsort(int a[],int first,int last){
    int i,j,temp;
    for(i=first+1;i<last;i++){
        j=i-1;
        temp=a[i];
        while(j>=first && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    return ;
}//插入排序

void selectsort(int a[],int counts){
    int j,temp;
    for(int i=0;i<counts-1;i++){
        int minnum=i;  //这个地方记录的是坐标
        for(j=i+1;j<counts;j++){
            if(a[j]< a[minnum])
                minnum=j;
        }
        if(a[i]!=a[minnum]){
            temp=a[minnum];
            a[minnum]=a[i];
            a[i]=temp;
        }
    }
}//选择排序

int binarySearch( int a[], int value, int n){
    int mid=n/2;
    int low=0,high=n-1;
    while(low<high){
        if(mid<a[mid]){
            high=mid-1;
        }
        else if(mid>a[mid]){
            low=mid+1;
        }
        else return mid;
    }
    return -1;
}


int main()
{
    int a[]={5,2,3,4,1,0,8,7};
    //bubblesort(a, sizeof(a)/sizeof(a[0]));
    //quiksort(a,0,8);
    //insertsort(a,0,8);
    selectsort(a,8);
    for(int i = 0; i < 8; ++i)
        cout<<a[i]<<endl;
    int finds=binarySearch(a,3,8);
    cout<<"the result is "<<finds<<endl;
    return 0;
}

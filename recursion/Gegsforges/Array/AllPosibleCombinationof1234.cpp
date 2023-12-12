#include<bits/stdc++.h>
using namespace std;
void AllCombition(int arr[],int data[],int Start,int End,int r,int index)
{
    if(index==r)
    {
        for(int i=0;i<r;i++)
            cout<<data[i]<<" ";
        cout<<endl;
        return;

    }
    for(int i=Start;i<=End && End-i+1>=r-index;i++)
    {
         while (arr[i] == arr[i+1])
             i++;
        data[index]=arr[i];
        AllCombition(arr,data,i+1,End,r,index+1);
    }
}

int main()
{
    int data[100];
    int arr[5]={1,2,3,4,5};
    AllCombition(arr,data,0,4,3,0);
    return 0;
}

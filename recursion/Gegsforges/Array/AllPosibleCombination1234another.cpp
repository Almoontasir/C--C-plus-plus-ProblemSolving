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
    if(Start>End)
        return;
    while(arr[Start]==arr[Start+1])
        Start++;
    data[index]=arr[Start];
    AllCombition(arr,data,Start+1,End,r,index+1);
    AllCombition(arr,data,Start+1,End,r,index);
}
int main()
{
    int input[5]={1,2,2,4,5};
    int n= sizeof(input)/sizeof(input[0]);
    int data[100];
    AllCombition(input,data,0,n-1,3,0);
    return 0;
}

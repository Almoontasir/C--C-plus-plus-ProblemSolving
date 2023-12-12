#include<bits/stdc++.h>
using namespace std;
void AllCombition(int data[],int Start,int End,int r,int index)
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
    data[index]=Start+1;
    AllCombition(data,Start+1,End,r,index+1);
    AllCombition(data,Start+1,End,r,index);
}
int main()
{
    int n=5;
    int k=3;
    int data[100];
    AllCombition(data,0,n-1,k,0);
    return 0;
}


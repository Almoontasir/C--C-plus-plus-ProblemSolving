#include<bits/stdc++.h>
using namespace std;
void increasingSequence(int data[],int n,int k,int start,int index)
{
    if(index==k)
    {
        for(int i=0;i<k;i++)
            cout<<data[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=start;i<n && n-i>=k-index;i++)
    {
        data[index]=i+1;
        increasingSequence(data,n,k,i+1,index+1);
    }
}
int main()
{
    int n = 7;
    int k =3;
    int data[100];
     increasingSequence(data,n,k,0,0);
    return 0;
}

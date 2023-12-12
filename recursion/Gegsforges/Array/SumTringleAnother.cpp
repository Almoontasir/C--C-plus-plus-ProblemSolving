#include<bits/stdc++.h>
using namespace std;
void helper(int a[],int temp[],int n,int i)
{
    if(i==n-1)return;
   temp[i]=a[i]+a[i+1];
   helper(a,temp,n,i+1);
}
void sumTringle(int sum[],int n)
{
    if(n==0)return;
    int temp[n-1];
     helper(sum,temp,n,0);

    sumTringle(temp,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;
}
int main()
{
     int sum[5]={1,2,3,4,5};
    int n = sizeof(sum)/sizeof(sum[0]);
    sumTringle(sum,n);
    return 0;
    return 0;
}

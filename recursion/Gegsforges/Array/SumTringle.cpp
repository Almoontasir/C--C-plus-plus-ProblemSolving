#include<bits/stdc++.h>
using namespace std;
void sumTringle(int sum[],int n)
{
    if(n==0)return;
    int temp[n-1];
    for(int i=0;i<n-1;i++)
    {
        temp[i]=sum[i]+sum[i+1];


    }

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
}

#include<bits/stdc++.h>
using namespace std;
void subset(int a[],int l,int r,int sum=0)
{
    if(l>r)
    {
        cout<<sum<<" ";
        return;

    }
    subset(a,l+1,r,sum+a[l]);
    subset(a,l+1,r,sum);
}
int main()
{
    int a[]={5,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    subset(a,0,n-1);
    return 0;
}

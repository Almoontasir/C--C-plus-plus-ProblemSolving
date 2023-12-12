#include<bits/stdc++.h>
using namespace std;
int maximum(int *a,int n,int i,int m)
{
    if(i>=n)return m;
    if(a[i]>m)m=a[i];
    return maximum(a,n,i+1,m);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<maximum(a,n,0,0);

    return 0;
}

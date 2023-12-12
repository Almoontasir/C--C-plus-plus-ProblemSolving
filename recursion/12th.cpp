#include<bits/stdc++.h>
using namespace std;
int maximum(int *a,int n,int i,int m,int m1)
{
    if(i>=n)return m1;

    if(a[i]>m)
    {
        m1 = m;
        m=a[i];
    }
    return maximum(a,n,i+1,m,m1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<maximum(a,n,0,0,0);

    return 0;
}


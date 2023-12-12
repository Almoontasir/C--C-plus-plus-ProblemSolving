#include<bits/stdc++.h>
using namespace std;
void sol(char a[],int n,int k,string s="")
{
    if(k==0)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {

        sol(a,n,k-1,s+a[i]);
    }
}
int main()
{
    char a[]={'a','b','c'};
    int n =3;
    for(int i=1;i<=n;i++)
    sol(a,n,i);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void sol(int a[],int k,int n,string s="")
{
    if(k==n)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            sol(a,k+1,n,s+" "+to_string(i));
            a[i]=0;

        }
    }
}

int main()
{
    int n =3;
    int a[n+1];
    memset(a,0,sizeof(a));
    sol(a,0,n);
    return 0;
}

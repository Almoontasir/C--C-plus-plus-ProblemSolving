#include<bits/stdc++.h>
using namespace std;
void sol(char a[],int n,int k=0,string s="")
{
    if(k==n)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        string new_string;
        new_string = s+a[i];
        cout<<new_string<<endl;
        sol(a,n,k+1,s+a[i]);
    }
}
int main()
{
    char a[]={'a','b','c'};
    int n =3;
    sol(a,n);
    return 0;
}

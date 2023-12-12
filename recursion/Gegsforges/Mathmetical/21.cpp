#include<bits/stdc++.h>
using namespace std;
void sol(int n,int m,int i=2,string s="")
{
    if(n%i==0 && n/i==1)
    {
        s +=" "+to_string(i);
        cout<<s<<endl;
        return;
    }
    if(n/i<1 or i>m/2)
        return;
    if(n%i==0)
        sol(n/i,m,i,s+" "+to_string(i));
     sol(n,m,i+1,s);
}
int main()
{
    int n =12;
    sol(n,n);
    return 0;
}

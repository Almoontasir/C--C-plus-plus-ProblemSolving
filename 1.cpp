#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,m;
       cin>>n>>m;
       if(n==1 && m==1)
        cout<<0<<endl;
       else if(n>=m)
        cout<<n-1+m-1+1+m-1<<endl;
       else
        cout<<n-1+m-1+1+n-1<<endl;
   }
    return 0;
}


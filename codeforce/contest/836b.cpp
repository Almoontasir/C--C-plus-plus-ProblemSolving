#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     if(n%2)
         {
             for(int i=0;i<n;i++)
                cout<<1<<" ";
             cout<<nline;
         }
         else
         {
             for(int i=0;i<n-2;i++)
                cout<<2<<" ";
             cout<<1<<" "<<3<<nline;
         }

 }

return 0;
}

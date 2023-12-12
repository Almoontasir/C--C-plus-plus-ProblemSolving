#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 int ans =0;
 int n;
 cin>>n;
 int x;
 for(int i=0;i<n;i++)
 {
     cin>>x;
     ans ^=x;
 }
 cout<<ans<<nline;

return 0;
}

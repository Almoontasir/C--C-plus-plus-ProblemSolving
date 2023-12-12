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
    int c,m,x;
    cin>>c>>m>>x;
    int minimum =min(c,m);
    int total = (c+m+x)/3;
    int ans = min(total,minimum);
    cout<<ans<<nline;
 }

return 0;
}

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
     ll n;
     cin>>n;
     ll a[n];
     for(int i=1;i<=n;i++)
        cin>>a[i];
     int j=1;
     ll ans =0;
     for(int i=1;i<=n;i++)
     {
         while(j<=n && i-1+a[j]>=j)j++;
         ans += (j-i);
//         cout<<ans<<endl;
     }
     cout<<ans<<nline;
 }

return 0;
}

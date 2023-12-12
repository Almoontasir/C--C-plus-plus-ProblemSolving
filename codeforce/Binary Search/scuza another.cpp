#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 ll t;
 cin>>t;
 while(t--)
 {
     ll n,q;
     cin>>n>>q;
     vector<ll>a(n+1,0);
     vector<ll>prefix(n+2,0);
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         prefix[i]= prefix[i-1]+a[i];
     }
     vector<ll>ans(q);
     vector<pair<ll,int>>k(q);
     for(int i=0;i<q;i++)
     {
         cin>>k[i].first;
         k[i].second = i;
     }
     sort(k.begin(),k.end());
     int ap =0;
     for(int i=0;i<q;i++)
     {
         while(true)
         {
             if(ap==n or a[ap+1]>k[i].first)break;
             ap++;
         }
         ans[k[i].second]=prefix[ap];
     }
     for(int i=0;i<q;i++)
     {
         cout<<ans[i]<<" ";
     }
     cout<<nline;
 }

return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ll long long
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
     ll prefixSum[n];
     vector<ll>v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i];

     }
     prefixSum[0]=v[0];
     for(int i=1;i<n;i++)
     {
         prefixSum[i] =prefixSum[i-1] + v[i];
     }
     for(int i=0;i<n;i++)
        cout<<prefixSum[i]<<" ";
     cout<<endl;
     while(q--)
     {
        ll k;
        cin>>k;
        auto it = upper_bound(v.begin(),v.end(),k);
        cout<<*it<<endl;
        it--;
        cout<<*it<<endl;
        int index = it-v.begin();
        cout<<index<<endl;
        cout<<prefixSum[index]<<endl;


     }
 }


return 0;
}

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
     ll n,x;
     cin>>n>>x;
     vector<ll>value(n+1,0);
     for(int i=1;i<=n;i++)
        cin>>value[i];
     vector<ll>prefixSum(n+1,0);
      sort(value.begin(),value.end());
     for(int i=1;i<=n;i++)
        prefixSum[i]=prefixSum[i-1]+value[i];

       ll total=0;
     for(int i=1;i<=n;i++)
     {
         if(prefixSum[i]<=x)
         {
             ll v = x - prefixSum[i];
//             cout<<v<<" "<<prefixSum[i]<<endl;
              ll d = v/i+1;
//              cout<<d<<endl;
              total +=d;

         }
         else
            break;
     }
     cout<<total<<nline;
 }

return 0;
}

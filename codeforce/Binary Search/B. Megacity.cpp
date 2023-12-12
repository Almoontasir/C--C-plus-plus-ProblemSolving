#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const ll million =1000000;
int main()
{
 IO
 ll n,s;
 cin>>n>>s;
 multiset<pair<ll,ll>>duo;
 ll x,y,p;
 for(int i=0;i<n;i++)
 {
     cin>>x>>y>>p;
     if(x<0)
        x = -x;
     if(y<0)
        y =-y;
     ll total = x*x + y*y;
     duo.insert({total,p});

 }

 ll m=0;
 ll r = million - s;
 ll flag =0;
 for(auto ele:duo)
 {
     m +=ele.second;
     if(m>=r)
     {
         flag =1;
        printf("%.7Lf\n",sqrtl((long double)ele.first));
         break;
     }
 }
 if(!flag)
    cout<<-1<<nline;

return 0;
}

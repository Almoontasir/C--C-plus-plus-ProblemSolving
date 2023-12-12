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
     ll l,r;
     cin>>l>>r;
     ll root_l = sqrtl(l);
//     cout<<root_l<<endl;
     ll root_r = sqrtl(r);
//     cout<<root_r<<endl;
     ll total = (root_r-root_l-1)*3;
//     cout<<total<<endl;
     for(int i=0;i<3;i++)
     {
         if(root_l*(root_l+i)>=l)
         {
             total +=(3-i);
             break;
         }
     }
//     cout<<total<<endl;
     for(int i=2;i>=0;i--)
     {
         if(root_r*(root_r+i)<=r)
         {

            total += i+1;
            break;
         }
     }
     cout<<total<<nline;



 }

return 0;
}


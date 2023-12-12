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
     int arrMe[n];
     int arrYou[n];
     ll me=0,you=0;
     for(int i=0;i<n;i++)
     {
         cin>>arrMe[i];
         me +=arrMe[i];
     }
     for(int i=0;i<n;i++)
     {
         cin>>arrYou[i];
         you +=arrYou[i];
     }
     sort(arrMe,arrMe+n);
     sort(arrYou,arrYou+n);
     int k = n/4;
     for(int i=0;i<k;i++)
     {
         me -=arrMe[i];
         you -=arrYou[i];

     }
//     cout<<me<<" "<<you<<endl;
     if(me>=you)
     {
         cout<<0<<nline;
         continue;
     }
     int ans =0;
     int r = n;
     int x =k;
     int y = k-1;
     int zero =0;
     while(true)
     {
         if(me>=you)
         {
             break;
         }
         me +=100;
         r++;
         zero++;
         if(y>=0)
         {
             you +=arrYou[y];
             y--;
         }
         if(r/4>k)
         {
             k++;
             me -=arrMe[x];
             x++;
             if(zero<k)
             {
                 you -=arrYou[y+1];
                 y++;
             }
         }

//         cout<<me<<" "<<you<<endl;
         ans++;
     }
     cout<<ans<<nline;

 }

return 0;
}

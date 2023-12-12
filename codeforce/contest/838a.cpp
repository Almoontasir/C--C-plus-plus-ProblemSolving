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
     vector<int>a(n);
     ll sum =0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         sum +=a[i];
     }
     int ans =INT_MAX;
     if(sum%2==0)
        ans =0;
     else
     {
         for(int i=0;i<n;i++)
         {
             if(a[i]%2==1)
             {
                 int item = a[i];
                 int k=0;
                 while(item%2==1)
                 {
                     item =item/2;
                     k++;
                 }
                 ans = min(k,ans);
             }
             else
             {
                 int item = a[i];
                 int k =0;
                 while(item%2==0)
                 {
                     item = item/2;
                     k++;
                 }
                 ans = min(k,ans);
             }
         }
     }
     cout<<ans<<nline;
 }

return 0;
}

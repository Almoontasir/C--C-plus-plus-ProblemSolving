#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
bool findResult(ll a[],ll value,ll h,ll n)
{
    ll sum =0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<value)
            sum +=(a[i+1]-a[i]);
        else
        {
            sum +=value;
        }
    }
    sum +=value;
    return sum>=h;
}

int main()
{
 IO
 ll t;
 cin>>t;
 while(t--)
 {
     ll n,h;
     cin>>n>>h;
     ll a[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
     ll left =1,right = h;
     while(right-left>1)
     {
         ll mid = left+(right-left)/2;
         if(findResult(a,mid,h,n))
         {
             right = mid;
         }
         else
            left = mid +1;
     }
     if(findResult(a,left,h,n))
        cout<<left<<nline;
     else
        cout<<right<<nline;

 }


return 0;
}

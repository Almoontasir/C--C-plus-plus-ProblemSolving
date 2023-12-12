#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
bool findResult(int value,int a,int b,int n)
{
    if(value ==0)return true;
    int x = a/value;
    int y = b/value;
    return x+y>=n;
}
int main()
{
 IO
 int n,a,b;
 cin>>n>>a>>b;
 int low =0,high = 100;
 while(high-low>1)
 {
     int mid  = low+(high-low)/2;
     if(findResult(mid,a,b,n))
     {
         low = mid;
     }
     else
        high = mid-1;
 }

 if(findResult(high,a,b,n))
    cout<<high<<nline;
 else
    cout<<low<<nline;

return 0;
}

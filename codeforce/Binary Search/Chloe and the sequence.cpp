#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 ll n,k;
 cin>>n>>k;
 ll ans =1;
 while(k%2==0)
 {
     k=k/2;
     ans++;
 }
 cout<<ans<<nline;



return 0;
}

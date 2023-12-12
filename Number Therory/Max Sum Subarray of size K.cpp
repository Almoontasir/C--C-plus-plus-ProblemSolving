#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e6+10;
int arr[N];
int prefixSum[N];
int main()
{
 IO
 int n,k;
 cin>>n>>k;
 for(int i=1;i<=n;i++)
 {
     cin>>arr[i];
     prefixSum[i]=prefixSum[i-1]+arr[i];
 }
 ll maximum =0;
 for(int r = k;r<=n;r++)
 {
     ll total = prefixSum[r]-prefixSum[r-k];
     maximum = max(maximum,total);
 }
 cout<<maximum<<endl;



return 0;
}


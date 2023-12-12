#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
  sort(v.begin(),v.end());
  int mid = n/2;
  for(int i=0;i<=mid;i++)
    cout<<v[i]<<" ";
  for(int i=n-1;i>mid;i--)
    cout<<v[i]<<" ";
  cout<<nline;
return 0;
}


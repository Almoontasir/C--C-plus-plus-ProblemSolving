#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e6+10;
int arr[N];
int main()
{
 IO
 int n,k;
 cin>>n>>k;
  unordered_set<int>hsh;
  int flag =0;
 for(int i=0;i<n;i++)
 {

  cin>>arr[i];
  if(hsh.find(k-arr[i])!=hsh.end())
  {
      flag =1;
  }
  else
    hsh.insert(arr[i]);
 }
 if(flag ==1)
    cout<<"YES"<<nline;
 else
    cout<<"NO"<<nline;



return 0;
}


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
  list<int>l;
  l.push_back(v[n-1]);
  for(int i=n-2;i>=0;i--)
  {
      if(i%2==0)
        l.push_back(v[i]);
      else
        l.push_front(v[i]);
  }
  for(auto it=l.begin(); it!=l.end(); ++it)
    cout<<*it<<" ";
  cout<<nline;
return 0;
}

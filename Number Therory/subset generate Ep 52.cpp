#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 int m;
 cin>>m;
 vector<int>v1(m);
 for(int i=0;i<m;i++)
    cin>>v1[i];
 int n = (1<<m);
 vector<int>v[n];

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(i&(1<<j))
         {
             v[i].push_back(v1[j]);
         }
     }

 }
 for(int i=0;i<n;i++)
 {
    for(auto it = v[i].begin();it!=v[i].end();it++)
     {
         cout<<*it<<" ";
     }
     cout<<endl;
 }

return 0;
}

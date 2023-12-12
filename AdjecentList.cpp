#include<bits/stdc++.h>
using namespace std;
#define max 1000
vector<int>edges[max];
vector<int>cost[max];
int in[max],out[max];
int main()
{
  freopen("in.txt","r",stdin);
  int n,e;
  cin>>n>>e;
  int x,y;
  for(int i=0;i<e;i++)
  {
      cin>>x>>y;

      edges[x].push_back(y);
      out[x]++;
      in[y]++;
      cost[x].push_back(1);
      cost[y].push_back(1);
  }
  for(int i=1;i<=n;i++)
  {
      cout<<"Node "<<i<<" adjacent nodes are-> ";
      for(int j=0;j<edges[i].size();j++)
        cout<<edges[i][j]<<" ";
      cout<<endl;
      cout<<"Outdegree= "<<out[i]<<endl;
      cout<<"Indegree= "<<in[i]<<endl;

  }

  return 0;
}

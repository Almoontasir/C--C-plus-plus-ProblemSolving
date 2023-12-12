#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
vector<pair<int,int>>p;
bool findResult(int value,int n)
{
    if(value==0)return true;
    int total =0;
    for(auto ele:p)
    {
        int m = ele.second;
        int x = m/value;
        total +=x;
    }
    return total>=n;
}
int main()
{
 IO
 int n,m;
 cin>>n>>m;
 vector<int>v(m);
 for(int i=0;i<m;i++)
    cin>>v[i];
 sort(v.begin(),v.end());

 int a=-1;
 for(int i=0;i<m;i++)
 {
     if(a==-1 or v[i]!=p[a].first)
     {

        p.push_back({v[i],1});
        a++;
     }
     else
        p[a].second++;

 }
// for(auto ele:p)
//    cout<<ele.first<<" "<<ele.second<<endl;
 int low =0,high =m;
 while(high-low>1)
 {
     int mid = low+(high-low)/2;
     if(findResult(mid,n))
        low = mid;
     else
        high = mid-1;
 }
 if(findResult(high,n))
    cout<<high<<nline;
 else
    cout<<low<<nline;


return 0;
}

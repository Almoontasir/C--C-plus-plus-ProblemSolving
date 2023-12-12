#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define long long ll;
int main()
{
 IO
 vector<int>v;
 v.push_back(5);
 v.push_back(7);
 auto it = upper_bound(v.begin(),v.end(),3);
 cout<<it-v.begin()<<endl;

return 0;
}

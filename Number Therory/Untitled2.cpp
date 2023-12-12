#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
 map<int,bool>mm;
 mm.insert({1,true});
 for(auto it = mm.begin();it!= mm.end();it++)
    cout<<it->first<<" "<<it->second<<endl;

return 0;
}

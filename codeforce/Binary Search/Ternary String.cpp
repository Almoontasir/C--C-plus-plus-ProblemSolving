#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
    IO
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k=-1;
        vector<pair<char,int>>v;
        for(auto ele:s)
        {
            if(k==-1 or ele!=v[k].first)
            {

                v.push_back({ele,1});
                k++;
            }
            else
                v[k].second++;
        }
        int ans =INT_MAX;
        for(int i=1; i<k; i++)
        {
            if(v[i-1].first!=v[i+1].first)
                ans = min(ans,v[i].second+2);
        }
        if(ans==INT_MAX)
            cout<<0<<nline;
        else
            cout<<ans<<nline;

    }

    return 0;
}

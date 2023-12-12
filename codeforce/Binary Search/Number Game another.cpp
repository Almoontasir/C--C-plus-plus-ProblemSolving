#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define long long ll;
int n;
vector<int>v;
bool findResult(int k)
{
    multiset<int>s;
    for(int i=0; i<n; i++)
        s.insert(v[i]);
    for(int i=1; i<=k; i++)
    {
        if(s.empty())return false;
        int value = k-i+1;
        auto it = s.upper_bound(value);
        if(it==s.begin())
            return false;
        it--;
        s.erase(it);
        if(!s.empty())
        {
            it = s.begin();
            int v = (*it);
            v +=value;
            s.erase(it);
            s.insert(v);
        }
    }
    return true;
}
int main()
{
    IO
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int m;
            cin>>m;
            v.push_back(m);

        }
        int low =0,high =n;
        while(high-low>1)
        {
            int mid = low+(high-low)/2;
            if(findResult(mid))
                low = mid;
            else
                high = mid-1;
        }
        if(findResult(high))
            cout<<high<<'\n';
        else
            cout<<low<<'\n';
        v.clear();
    }

    return 0;
}

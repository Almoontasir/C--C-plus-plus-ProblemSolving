#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
    IO
    int n,l;
    cin>>n>>l;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(),v.end());

    ll m =0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]-v[i]>m)
            m = v[i+1]-v[i];
    }
    double ans = m/2.0;
    if(v[0]-0>ans)
        ans = v[0]-0;
    if(l-v[n-1]>ans)
        ans = l-v[n-1];
    printf("%.10lf\n",ans);
    return 0;
}

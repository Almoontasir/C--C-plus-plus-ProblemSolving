#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N =1e5+10;
int Forward[N];
int Backward[N];
int a[N];
int main()
{
    IO
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            Forward[i] = __gcd(Forward[i-1],a[i]);
        }
        Backward[n]=a[n];
        Backward[n+1]=0;
        for(int i=n-1; i>0; i--)
        {
            Backward[i]= __gcd(Backward[i+1],a[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
//            cout<<Forward[l-1]<<" "<<Backward[r+1]<<endl;
            cout<<__gcd(Forward[l-1],Backward[r+1])<<nline;
        }
    }

    return 0;
}

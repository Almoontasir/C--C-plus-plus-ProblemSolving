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
    int n,k;
    cin>>n>>k;
    int remainder = k%(n-1);
//    cout<<remainder<<endl;
    int quatient = k/(n-1);
//    cout<<quatient<<endl;
    int result = quatient * n;
//    cout<<result<<endl;
    if(!remainder)
    {
        result -=1;
    }
    else
        result +=remainder;
    cout<<result<<nline;
 }

return 0;
}

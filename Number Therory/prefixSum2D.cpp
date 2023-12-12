#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e3+10;
int arr[N][N];
int pre[N][N];
int main()
{
// IO
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cin>>arr[i][j];
        pre[i][j]=arr[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
    }
}
 int t;
 cin>>t;
 while(t--)
 {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = pre[c][d]-pre[a-1][d]-pre[c][b-1]+pre[a-1][b-1];
    cout<<x<<endl;
 }

return 0;
}

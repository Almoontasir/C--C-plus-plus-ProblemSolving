#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e7+10;
long long int arr[N];
int main()
{
 IO
int n;
cin>>n;
 int t;
 cin>>t;
 while(t--)
 {
    int a,b,k;
    cin>>a>>b>>k;
    arr[a] +=k;
    arr[b+1] +=-k;
 }
 long long int maximum = 0;
 for(int i=1;i<=n;i++)
 {
     arr[i] = arr[i-1] + arr[i];
     maximum = max(maximum,arr[i]);
 }
 cout<<maximum<<nline;

return 0;
}

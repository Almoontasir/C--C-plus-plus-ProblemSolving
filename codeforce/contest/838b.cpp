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
     int n;
     cin>>n;
     vector<int>value(n);
     vector<int>operations(n);
     int ans =0;
     for(int i=0;i<n;i++)
     {

        cin>>value[i];
        int n = log2(value[i]);
        if(pow(2,n)==value[i])
        operations[i]=0;
        else
        {
            operations[i]=pow(2,n+1)-value[i];
            ans +=1;
        }
     }
     cout<<ans<<nline;
     for(int i =1;i<=n;i++)
     {
        if(operations[i-1])
        cout<<i<<" "<<operations[i-1]<<nline;
     }
 }

return 0;
}

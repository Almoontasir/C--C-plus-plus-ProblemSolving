#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e7+10;
int Hash[N][26];

int main()
{
 IO
 int t;
 cin>>t;
 while(t--)
 {
     for(int i=0;i<N;i++)
     {
         for(int j=0;j<26;j++)
            Hash[i][j]=0;
     }
     int n,q;
     cin>>n>>q;
     string s;
     cin>>s;
     for(int i=0;i<n;i++)
     {
         Hash[i+1][s[i]-'a']++;
     }
     for(int i=0;i<26;i++)
     {
         for(int j=1;j<=n;j++)
         {
             Hash[j][i]=Hash[j][i]+Hash[j-1][i];
         }
     }
     while(q--)
     {
         int l,r;
         cin>>l>>r;
         int odd =0;
         for(int i=0;i<26;i++)
         {
             int charCt = Hash[r][i]-Hash[l-1][i];
             if(charCt%2==1)
             odd++;
         }
         if(odd>1)cout<<"NO"<<endl;
         else cout<<"yes"<<endl;
     }



 }

return 0;
}

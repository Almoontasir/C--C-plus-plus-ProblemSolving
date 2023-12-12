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
     int n = s.length();
     int hsh[26];
    for(int i=0;i<26;i++)
        hsh[i]=0;
    for(int i=0;i<n;i++)
    {
        hsh[s[i]-'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(hsh[i]>1)
            c++;
    }
    if(c>0)
        cout<<"Yes"<<nline;
    else
        cout<<"No"<<nline;
 }

return 0;
}

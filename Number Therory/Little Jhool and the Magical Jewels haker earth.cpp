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
    int hsh[26];
    for(int i=0;i<26;i++)
        hsh[i]=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        hsh[s[i]-'a']++;

    int minimum = 100;
    for(int i=0;i<26;i++)

    for(int i=0;i<26;i++)
        if(i==1 or i==24 or i==17 or i==20 )
        minimum = min(minimum,hsh[i]);
    cout<<minimum<<nline;

 }

return 0;
}

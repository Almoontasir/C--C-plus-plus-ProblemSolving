#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
 bool isAnagram(string s, string t)
{
    vector<int>hsh1(26,0);
    vector<int>hsh2(26,0);
    for(int i=0; i<s.length(); i++)
        hsh1[s[i]-'a']++;

    for(int i=0; i<t.length(); i++)
        hsh2[t[i]-'a']++;

    int counter =0;
    for(int i=0; i<26; i++)
        counter += abs(hsh1[i]-hsh2[i]);
    if(counter==0)return true;
    else
        return false;
}
int main()
{
 IO
 string s,t;
 cin>>s>>t;
 cout<<isAnagram(s,t);

return 0;
}

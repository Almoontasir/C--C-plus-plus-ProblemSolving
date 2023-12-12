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
    string pattern,s;
    cin>>pattern>>s;
    map<char,int>m;
    for(int i=0;i<pattern.length();i++)
    {
        m.insert({pattern[i],0});
    }
    string word="";
    vector<string>v;
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            word +=s[i];
        }
        else
        {
            if(word.length()==pattern.length())
                v.push_back(word);
            word = "";
        }
    }
    int flag =0;
//    for(auto it=m.begin();it!=m.end();it++)
//        cout<<it->first<<" "<<it->second<<endl;
    for(int i=0;i<pattern.length();i++)
    {

        if(m.find(pattern[i])==m.end())
        {

            flag =1;
            cout<<"NO"<<nline;
            break;
        }

    }
    if(flag==0)
    cout<<"YES"<<nline;
 }

return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int digitS[26];
int digitT[26];
int main()
{
 IO
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<26; i++)
        {

            digitS[i]=0;
            digitT[i]=0;
        }
        string s,t;
        cin>>s>>t;
        int n = s.length();
        int m = t.length();
        for(int i=0; i<n; i++)
        {
            digitS[s[i]-'a']++;
        }
//        for(int i=0;i<26;i++)
//            cout<<digitS[i]<<" ";
//        cout<<endl;
        for(int i=0; i<m; i++)
        {
            digitT[t[i]-'a']++;
        }
//         for(int i=0;i<26;i++)
//            cout<<digitS[i]<<" ";
//        cout<<endl;
        int counter =0;
        for(int i=0;i<26;i++)
        {
            counter += abs(digitS[i]-digitT[i]);
        }
        cout<<counter<<nline;

    }

    return 0;
}

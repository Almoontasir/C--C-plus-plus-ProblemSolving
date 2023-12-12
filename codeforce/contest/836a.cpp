#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1 = s;
        reverse(s.begin(),s.end());
        cout<<s1+s<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    int m=0;
    for(int i=0;i<n;i++)
    {
        int t = s[i];
        m = m*10 + t-48;
    }
    cout<<m<<endl;
}

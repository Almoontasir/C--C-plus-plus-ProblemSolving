#include<bits/stdc++.h>
using namespace std;
int atoi(string s,int n,int m,int i)
{
    if(i>=n)return m;
    int t = s[i];
    cout<<t<<endl;
    return atoi(s,n,m*10+t-48,i+1);

}
int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    cout<<atoi(s,n,0,0)<<endl;

    return 0;
}

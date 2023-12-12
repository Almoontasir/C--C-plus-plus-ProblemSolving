#include<bits/stdc++.h>
using namespace std;
void sol(int n,string s)
{
    if(n==0)
    {
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    s +=to_string(n%2);
    sol(n/2,s);
}
int main()
{
    int n=2048;
    sol(n,"");
    return 0;
}

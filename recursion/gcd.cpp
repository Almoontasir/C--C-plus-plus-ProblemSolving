#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int t;
    while(b!=0)
    {
        t = a;
        a = b;
        b = t%b;

    }
    cout<<a<<endl;
    return 0;
}

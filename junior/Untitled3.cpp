#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    int c = t&n;
    int d = t^n;
    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}


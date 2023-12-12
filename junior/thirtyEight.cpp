#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int a,b,c;
    if(n%k==0)
        a = n/k;
    else
        a = n/k+1;

    b = a*t;
    c = t+d;
    if(b>c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}
int main()
{
 IO
 int a=18;
 int b =12;
 cout<<gcd(a,b)<<endl;


return 0;
}

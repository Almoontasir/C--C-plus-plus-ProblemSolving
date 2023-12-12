#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    while(scanf("%lld",&t)==1)
    {
        if(!t)break;
        long long root = sqrt(t);
        printf("%s\n",(root*root==t?"yes":"no"));
    }
    return 0;
}

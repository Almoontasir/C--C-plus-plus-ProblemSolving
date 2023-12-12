#include<bits/stdc++.h>
using namespace std;
int sol(int n)
{
    if(!n)return 0;
    return n%10 + sol(n/10);
}
int main()
{
    int n = 1234;
    cout<<sol(n)<<endl;
    return 0;
}

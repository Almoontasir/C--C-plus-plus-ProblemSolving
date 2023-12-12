#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b, int t)
{
    if(b==0)return a;
        t = a;
       return gcd(b,t%b,t);

}
int main()
{
    int a,b;
    cin>>a>>b;
   cout<<gcd(a,b,0);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int reverse_int(int n,int r)
{
    if(n>0)
    {
        int t = n%10;
        r = r*10 + t;
        return reverse_int(n/10,r);
    }
    return r;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse_int(n,0)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void recursion(int i,int n)
{
    if(i>=n) return;
    else if(i==0)cout<<"1";
    else if(i==1)cout<<" + X";
    else
    {
        cout<<" + X^"<<i;
    }
    recursion(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    recursion(0,n);
    return 0;
}

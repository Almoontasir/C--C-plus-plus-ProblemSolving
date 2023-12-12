#include<bits/stdc++.h>
using namespace std;
int sum =0;
int recursion(int i,int n,int x)
{
    if(i>=n) return sum;
    else if(i==0)sum = sum + 1;
    else if(i==1)sum = sum + x;
    else
    {
        sum =  sum + pow(x,i);
    }
    recursion(i+1,n,x);
    cout<<"MOON"<<endl;
}
int main()
{
    int n,x;
    cin>>x>>n;
    cout<<recursion(0,n,x);
    return 0;
}

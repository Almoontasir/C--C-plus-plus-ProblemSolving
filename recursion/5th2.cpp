#include<bits/stdc++.h>
using namespace std;
int recursion(int i,int x,int n)
{
    if(i<n)
    {
        return pow(x,i)+recursion(i+1,x,n);
    }
    return 0;

}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<recursion(0,x,n)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=2,n=5,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+pow(x,i);
    }
    cout<<sum<<endl;
    return 0;
}

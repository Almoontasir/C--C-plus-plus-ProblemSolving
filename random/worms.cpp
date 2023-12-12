#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int n;
int m;
int q;
int a[N];
int NthWorms(int value)
{
    long long  low =0,high = n-1;
    while(high-low>1)
    {
       long long mid = low + (high-low)/2;
       if(a[mid]==value)
        return mid+1;
       else if(a[mid]>value)
        high = mid;
       else
        low = mid;
    }
    if(value<=a[low])return low+1;
    else
        return high +1;
}
int main()
{
    cin>>n;
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        int t;
        cin>>t;

        a[i] = a[i-1]+t;
    }
    cin>>m;
    while(m--)
    {
        cin>>q;
        cout<<NthWorms(q)<<endl;
    }
    return 0;
}

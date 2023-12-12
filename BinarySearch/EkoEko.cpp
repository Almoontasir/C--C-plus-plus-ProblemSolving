#include<bits/stdc++.h>
using namespace std;
const int  N=1e6+10;
int n;
long long m;
long long trees[N];
long long maximum = 0;
bool is_perfect(long long high)
{
    long long wood =0;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>=high)
            wood +=(trees[i]-high);
    }
    return wood >=m;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>trees[i];
        if(trees[i]>maximum)
        maximum = trees[i];
    }
    long long low = 0,high = maximum;
    while(high-low>1)
    {
        long long mid = low + (high -low)/2;
        if(is_perfect(mid))
            low =mid;
        else
            high = mid-1;
    }
    if(is_perfect(high))
        cout<<high<<endl;
    else
        cout<<low<<endl;
    return 0;
}

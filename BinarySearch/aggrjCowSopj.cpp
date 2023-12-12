#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n;
int a[N];
int m;
bool findMinimum(double value)
{
    int i =1;
    int j =1;
    int k =0;
    while(i<m && j<n)
    {
        if(a[j]-a[k]>=value)
        {
            i++;
            k = j;
            j++;

        }
        else
            j++;
    }
    return i==m;
}
int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        double maximum =0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {

            cin>>a[i];
            if(a[i]>maximum)
                maximum = a[i];
        }
        sort(a,a+n);
        long long  low =0,high = maximum;
        while(high-low>1)
        {
            long long mid  = low + (high -low)/2;
            if(findMinimum(mid))
            {
                low = mid;
            }
            else
                high = mid-1;
        }
        if(findMinimum(high))
            cout<<high<<endl;
        else
            cout<<low<<endl;
    }

    return 0;
}

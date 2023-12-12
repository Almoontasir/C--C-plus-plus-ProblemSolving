#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
const int N =110;
int n;
int a[N];
int low;
int high;
bool findValue(int item)
{
    int left =low,right =high;
    while(right-left>1)
    {
        int mid = left+(right-left)/2;
//        cout<<a[mid]<<endl;
        if(a[mid]>item)
        {
            right = mid-1;
        }
        else
            left = mid;
    }
    if(a[right]<=item)
    {
        high = right -1;
        return true;
    }
    else if(a[left]<=item)
    {
        high = left -1;
        return true;
    }
    else
        return false;


}
bool findResult(int value)
{
    int i =1;
    low =0;
    high = n-1;
    while(i<=value)
    {
//        cout<<high<<" "<<low<<endl;
        int item = value -i+1;
        if(high<low)return false;
        if(findValue(item))
        {
            low++;
            i++;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    IO
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {

            cin>>a[i];

        }
//        cout<<maximum<<endl;
        sort(a,a+n);
        int left =0,right =n;
        while(right-left>1)
        {
            int mid = left +(right - left)/2;
            if(findResult(mid))
            {
                left = mid;
            }
            else
                right = mid-1;
        }
        if(findResult(right))
              cout<<right<<'\n';
        else
            cout<<left<<'\n';

    }
    return 0;
}

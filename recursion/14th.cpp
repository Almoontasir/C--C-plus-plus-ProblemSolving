#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *a,int l,int r,int item)
{
    int m;
    if(l<=r)
    {
        m = l+(r-l)/2;
        if(a[m]==item)
            return m;
        else if(a[m]>item)
            return binarySearch(a,l,m-1,item);
        else if(a[m]<item)
            return binarySearch(a,m+1,r,item);
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int q;
    cin>>q;
    while(q!=0)
    {
        int item;
        cin>>item;
        if(binarySearch(a,0,n-1,item)==-1)
            cout<<"The item is not in the list"<<endl;
        else
            cout<<binarySearch(a,0,n-1,item)<<endl;
        q--;

    }
    return 0;
}

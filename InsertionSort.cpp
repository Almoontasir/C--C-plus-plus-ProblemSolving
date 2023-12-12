#include<bits/stdc++.h>
using namespace std;
InsertionSort(int a[],int n)
{
    int counter = 0;
    for(int i=1;i<n;i++)
    {
        int item = a[i];
        int j;
        for( j=i-1;a[j]>item && j>=0;j--)
        {
            counter++;
            a[j+1] = a[j];
        }
        a[j+1] = item;
    }
    cout<<counter<<endl;
}
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
        cin>>a[i];
    InsertionSort( a, n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

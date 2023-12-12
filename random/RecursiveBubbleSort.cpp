#include<bits/stdc++.h>
using namespace std;
int coun =0;
void BubbleSort(int a[],int n,int i,int flag)
{
    coun++;
    if(i==n-1)
    {
        if(flag)
        {
            flag =0;
            i=0;
            n = n-1;//as last value is already sorted and most capital value
        }
        else
            return;
    }
    if(a[i]>a[i+1])
    {
        int t = a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        flag = 1;
    }
    BubbleSort(a,n,i+1,flag);
}
int main()
{
    int a[]= {2,3,56,23,43,21,32};
    int n = sizeof(a)/sizeof(a[0]);
    BubbleSort(a,n,0,0);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<coun<<endl;
    return 0;
}

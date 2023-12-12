#include<bits/stdc++.h>
using namespace std;
void QuickSort(int a[],int left,int right)
{
    if(left>right)return;
    int i = left;
    int j= right;
    int m = (left+right)/2;
    int pivot = a[m];
    while(i<=j)
    {
        while(a[i]<pivot)
            i++;
        while(a[j]>pivot)
            j--;
            if(i>j)break;
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    QuickSort(a,left,j);
    QuickSort(a,i,right);

}

int main()
{
     int a[]= {2,3,56,23,43,21,32};
    int n = sizeof(a)/sizeof(a[0]);
    QuickSort(a,0,n-1);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

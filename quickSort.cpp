#include<bits/stdc++.h>
using namespace std;
int counter =0;
int partitionSort(int a[],int left,int right);
void QuickSort(int a[],int left,int right)
{
    if(left>=right)return ;
    int p = partitionSort(a,left,right);
    QuickSort(a,left,p-1);
    QuickSort(a,p+1,right);

}
int partitionSort(int a[],int left,int right)
{
    counter++;
    int i,j;
    int pivot = a[right];
    for(i = left-1,j = left;j<right;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[i+1];
    a[i+1] = a[right];
    a[right] = t;

    return i+1;
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

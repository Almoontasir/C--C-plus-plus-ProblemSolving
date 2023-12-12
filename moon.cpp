#include<bits/stdc++.h>
using namespace std;
#define ma 100
int bubble[ma];
void quickSort(int left,int right)
{
    int pivot=bubble[(left+right)/2];
    int i=left,j=right;
    while(i<=j)
    {
        while(bubble[i]<pivot)i++;
        while(bubble[j]>pivot)j--;
        if(i<=j)
        {
            int temp=bubble[i];
            bubble[i]=bubble[j];
            bubble[j]=temp;
            i++;j--;

        }
    }
    if(left<j)quickSort(left,j);
    if(i<right)quickSort(i,right);

}
int main()
{
    freopen("in.txt","r",stdin);
    int n;
     cin>>n;

     for(int i=0;i<n;i++)cin>>bubble[i];
    quickSort(0,n-1);
    for(int i=0;i<n;i++)cout<<bubble[i]<<" ";
    return 0;


}


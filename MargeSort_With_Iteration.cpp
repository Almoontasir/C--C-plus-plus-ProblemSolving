#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter data one by one "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
   cout<<"The array before sorting "<<endl;
   for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;




        for(int length_size = 1;length_size<=n-1;length_size = 2*length_size)
       {

        for(int left = 0;left<n-1;left = left + 2 * length_size)
        {
            int mid = min(left + length_size -1,n-1);
            int right = min(left + 2*length_size -1,n-1);

    int n1 = mid - left +1;
    int n2 = right - mid;
    int L[n1],R[n2];
    for(int i =0;i<n1;i++)
        L[i] = a[i + left];
    for(int j =0;j<n2;j++)
        R[j] = a[mid + 1 + j];
    int i =0,j=0,k = left;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];

    }
    while(i<n1)

        a[k++] = L[i++];

    while(j<n2)

        a[k++] = R[j++];
        }
    }
        cout<<"The array after sorting "<<endl;
   for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;

    return 0;
}

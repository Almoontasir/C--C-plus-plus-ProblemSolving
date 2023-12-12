#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int step =1;step<=n-1;step *=2)
    {
        for(int left=0;left<n-1;left +=2*step)
        {
            int mid = min(left+step-1,n-1);
            int right = min(left+2*step-1,n-1);
            int n1 = mid -left +1;
            int n2 = right - mid;
            int L[n1],R[n2];
            for(int i=0;i<n1;i++)
                L[i]=a[left+i];
            for(int i=0;i<n2;i++)
                R[i]=a[mid+1+i];
            int i=0,j=0,k=left;
            while(i<n1 && j<n2)
            {
                if(L[i]<R[j])
                    a[k++]=L[i++];
                else
                {
                    a[k++]=R[j++];
                }
            }
            while(i<n1)
                a[k++]=L[i++];
            while(j<n2)
                a[k++]=R[j++];
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

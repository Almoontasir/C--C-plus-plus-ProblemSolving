#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n)
{
    int counter = 0,flag =0;
    for(int i=0;i<n;i++)
    {
        flag = 0;
        for(int j=0;j<n-1-i;j++)
        {
            counter ++;

            if(a[j]>a[j+1])
            {

                flag =1;
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }

        if(flag == 0)break;
    }
    cout<<counter<<endl;
}
int main()
{
    freopen("in.txt","r",stdin);

    int n;
    cout<<"Enter number of values"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values one by one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    BubbleSort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

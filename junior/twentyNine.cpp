#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int k=0,l=0,counter=0;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
                counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}



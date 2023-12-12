#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,o=0,counter = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==-1 && o==0)
        {
            counter++;
        }
        else if(a[i]==-1 && o>0)
        {
            o--;

        }
        else if(a[i]>=0)
        {
            o = o+a[i];
        }
    }
    cout<<counter<<endl;
    return 0;
}

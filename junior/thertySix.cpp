#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        if(x==1)
        {
            a[x+1] = a[x+1] + (a[x]-y);

            a[x] = 0;
        }
        else if(x==n)
        {
            a[x-1] = a[x-1] + (y-1);

            a[x] = 0;
        }
        else{
            a[x+1] = a[x+1] + (a[x]-y);


        a[x-1] = a[x-1] + (y-1);

            a[x] = 0;

        }

    }

    for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n+2;i++)
        {
            int c = i&n;
            int d = i^n;
            if(c!=0 && d!=0)
            {
                 cout<<i<<endl;
                 break;
            }

        }
    }

    return 0;
}

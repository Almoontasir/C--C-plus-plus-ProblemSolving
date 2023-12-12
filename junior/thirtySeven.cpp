#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int a;
    int maximum =0,counter =0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<=b)
        {
            maximum = maximum + a;
            if(maximum>d)
            {
                counter++;
                maximum = 0;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}

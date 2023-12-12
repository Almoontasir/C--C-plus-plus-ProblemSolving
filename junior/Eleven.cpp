#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,counter = 0,a;

    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
            counter +=2;
        else
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}

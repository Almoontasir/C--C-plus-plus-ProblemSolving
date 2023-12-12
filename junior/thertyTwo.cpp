#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int i=1,m;
    while(1)
    {
        m = n*i;
        if(m%10==0)
        {
            cout<<i<<endl;
            break;

        }
        else if((m-c)%10==0)
        {
            cout<<i<<endl;
            break;
        }
        i++;


    }
    return 0;
}

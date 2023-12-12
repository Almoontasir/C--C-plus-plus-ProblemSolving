#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    bool check[4];
    for(int i=0;i<4;i++)
        check[i]=false;

    int counter = 0;
    for(int i=0;i<4;i++)
        cin>>a[i];
    for(int i=0;i<4;i++)
    {
        if(check[i]==true)
            continue;
        for(int j=0;j<4;j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
            {
                counter++;
                check[j]=true;
            }

        }
    }
    cout<<counter<<endl;

    return 0;
}

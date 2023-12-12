#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int o=0,tw=0,th=0;
    int value;
    int one[n+1],two[n+1],three[n+1];
    int j=1,k=1,l=1;
    for(int i=1;i<=n;i++)
    {
        cin>>value;
        if(value==1)
        {
            o++;
            one[j++]=i;
        }
        if(value==2)
        {
            tw++;
            two[k++]=i;
        }
        if(value==3)
        {
            th++;
            three[l++]=i;
        }
    }
    int c1=min(o,tw);
    int c2=min(c1,th);
    if(c2==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<c2<<endl;
    for(int i=1;i<=c2;i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }

    return 0;
}

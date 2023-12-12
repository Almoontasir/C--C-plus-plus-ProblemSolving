#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int maximum = max(n,m);
    if(maximum==1)
        cout<<"1"<<"/"<<"1"<<endl;
    if(maximum==2)
        cout<<"5"<<"/"<<"6"<<endl;
    if(maximum==3)
        cout<<"2"<<"/"<<"3"<<endl;
    if(maximum==4)
        cout<<"1"<<"/"<<"2"<<endl;
    if(maximum==5)
        cout<<"1"<<"/"<<"3"<<endl;
    if(maximum==6)
        cout<<"1"<<"/"<<"6"<<endl;
    return 0;
}

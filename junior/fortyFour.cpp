#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    char c;
    int m =99;
    int cal = n - k+2;
    int i=1;

    while(i<=cal)
    {
        if(i%2==1)
            cout<<'a';
        else
            cout<<'b';
            i++;
    }
    int last = n-cal;
    while(last>0)
    {
        c=m;
        cout<<c;
        m++;
        last--;
    }
    cout<<endl;
    return 0;
}

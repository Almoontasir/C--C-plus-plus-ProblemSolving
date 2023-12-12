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
        int m =3*n;
        int result ;
        if(n%2==1)
            result = n/2+1;
        else
            result = n/2;
        cout<<result<<endl;
        int i=1,j=m;
        while(result--)
        {
            cout<<i<<" "<<j<<endl;
            i +=3,j -=3;
        }



    }
    return 0;
}

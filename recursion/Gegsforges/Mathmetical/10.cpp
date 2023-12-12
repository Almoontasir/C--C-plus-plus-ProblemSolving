#include<bits/stdc++.h>
using namespace std;
int result(int n,int m,int &sum)
{
    if(m==1)
    {
        return sum = n*(n+1)/2;
    }
    result(n,m-1,sum);
    return sum*(sum+1)/2;
}
int main()
{
    int sum =0;
    int m =3,n = 2;
    int x =result(3,2,sum);
    cout<<"sum("<<m<<","<<n<<")="<<x<<endl;

    return 0;
}

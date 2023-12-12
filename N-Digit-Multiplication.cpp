#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int
ulli Multiply(ulli x,ulli y,ulli n)
{
    ulli a,b,c,d, m,e,f,g,h,p;

    if(n==1)
        return x*y;
    if(n%2==1)
        m = (n+1)/2;
    else
        m = n/2;

    p=pow(10,m);
    a = x/p;
    b = x%p;
    c = y/p;
    d = y%p;
    e = Multiply(a,c,m);
    f = Multiply(a,d,m);
    g = Multiply(b,c,m);
    h = Multiply(b,d,m);
    return (ulli)pow(10,2*m)*e+p*(f+g)+h;

}
int main()
{
    ulli n1,n2,n,x,y;
//    cin>>x;
//    cin>>y;
    x = 56781;
    y=  92347;
    n1 = log10(x)+1;
    n2 = log10(y)+1;
    n = min(n1,n2);
    cout<<Multiply(x,y,n);

    return 0;

}

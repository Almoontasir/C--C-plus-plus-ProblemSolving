#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int n,m,v1,v2;
        cin>>n>>m>>v1>>v2;
        long long int total = m-n+1;
        long long int a,b,c,d,e;
        a = v1;
        b = v1+v2;
        c = v1 + 2*v2;
        d = v1 + 3*v2;
        e = v1 + 4*v2;
       long long int r1,r2,r3,r4,r5;
       r1 = floor(total/a) + floor(total/b)+floor(total/c)+floor(total/d)+floor(total/e);
       r2 = floor(total/(a*b)) + floor(total/(a*c))+floor(total/(a*d))+floor(total/(a*e))+floor(total/(b*c))
             +floor(total/(b*d))+floor(total/(b*e))+floor(total/(c*d))+floor(total/(c*e))+floor(total/(d*e));

       r3 = floor(total/(a*b*c)) + floor(total/(a*b*d))+floor(total/(a*b*e))+floor(total/(a*c*d))+floor(total/(a*c*e))
             +floor(total/(a*d*e))+floor(total/(b*c*d))+floor(total/(b*c*e))+floor(total/(b*d*e))+floor(total/(c*d*e));

       r4 = floor(total/(a*b*c*d)) + floor(total/(a*b*c*e))+floor(total/(a*b*d*e))+floor(total/(a*c*d*e))
            +floor(total/(b*c*d*e));

       r5 = floor(total/(a*b*c*d*e));
       long long int result = r1-r2+r3-r4+r5;
       cout<<result<<endl;

    }
    return 0;



}

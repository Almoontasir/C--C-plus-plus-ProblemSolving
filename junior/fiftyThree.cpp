#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int counter =0,counter1=0,counter2=0,counter3=0,counter4=0,counter5=0;
        long long int n,m,a,d;
        cin>>n>>m>>a>>d;
        long long int r = (n/a+1)*a;

        long long int i=r;
        while(i<=m)
        {

            counter1++;
            i = i+a;
        }

        r = (n/(a+d)+1)*(a+d);

         i= r-a-d;
        while(i<=m)
        {
             i = i+a+d;
            if(i%a==0)continue;
            counter2++;

        }
         r = (n/(a+2*d)+1)*(a+2*d);

        i= r-a-2*d;
        while(i<=m)
        {
            i = i+a+2*d;
             if(i%a==0)continue;
            if(i%(a+d)==0)continue;
            counter3++;

        }
         r = (n/(a+3*d)+1)*(a+3*d);

         i= r-a-3*d;
        while(i<=m)
        {
            i = i+a+3*d;
            if(i%a==0)continue;
            if(i%(a+d)==0)continue;
            if(i%(a+2*d)==0)continue;
            counter4++;

        }
         r = (n/(a+4*d)+1)*(a+4*d);

         i= r-a-4*d;
        while(i<=m)
        {
             i = i+a+4*d;
             if(i%a==0)continue;
             if(i%(a+d)==0)continue;
             if(i%(a+2*d)==0)continue;
             if(i%(a+3*d)==0)continue;
             counter5++;

        }

        counter = counter1+counter2+counter3+counter4+counter5;
       long long int total = m-n+1;
        cout<<total-counter<<endl;
    }
    return 0;
}

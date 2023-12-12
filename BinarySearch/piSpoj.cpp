#include<bits/stdc++.h>
using namespace std;
const double  pi =  3.141592653589793238;
const int N = 1e4+10;
double eps = 1e-5;
int n;
int f;
double a[N];
bool findResult(double mid)
{
    int frd =0;
    for(int i=0;i<n;i++)
    {

        frd +=(int)(a[i]/mid);
    }

    return frd>=f+1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>f;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)

           a[i]=a[i]*a[i]*pi;


        double low =0,high = a[n-1];

        while(high-low>eps)
        {
            double mid = low + (high - low)/2;

            if(findResult(mid))
            {
                low = mid;

            }
            else
                high = mid;
        }

       printf("%.4lf\n",low);


    }
    return 0;
}

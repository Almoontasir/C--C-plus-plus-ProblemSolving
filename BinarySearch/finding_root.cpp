#include<bits/stdc++.h>
using namespace std;
double esp = 1e-6;
double multiple(double value,int n)
{
    return pow(value,n);
}
void sol(double n,int k)
{
    double left =1,right = n;
    while(right-left>esp)
    {
        double mid = left+(right-left)/2;
        if(multiple(mid,k)<n)
        {
            left = mid ;

        }
        else
            right = mid;
    }
    cout<<setprecision(10)<<left<<"\n"<<right<<endl;
    cout<<pow(n,1.0/k);

}
int main()
{
    double n = 3;
    int k =3;
    sol(n,k);

    return 0;
}

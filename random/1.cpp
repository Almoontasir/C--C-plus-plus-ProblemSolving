#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;


    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    long long value;
    for(int i=0;i<n;i++)
    {

        cin>>value;
        long long m = sqrt(value);

        if(m*m!=1 && m*m == value)
        {
            if(is_prime(m))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }



    return 0;
}

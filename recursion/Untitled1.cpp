#include<bits/stdc++.h>
using namespace std;
int counter =0;
int fibo(int n)
{
    counter++;
    if(n<3)return 1;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    cout<<counter<<endl;
    return 0;
}

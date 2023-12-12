#include<bits/stdc++.h>
using namespace std;
int one(int n)
{
    return(n>=0 && n<=9);
}
bool is_palindrome(int n,int *p)
{
    if(one(n))
        return (n == *p % 10);
    if(!is_palindrome(n/10,p))
        return false;
    *p /=10;
    return (n%10 == *p%10);
}
int main()
{
    int n;
    cin>>n;
    if(n<0)
        n = -n;
    int *p = &n;
    if(is_palindrome(n,p))
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

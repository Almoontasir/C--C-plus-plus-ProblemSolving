#include<bits/stdc++.h>
using namespace std;
//nth power of unique natural number
int  solution(int x,int n,int num=1,int sum=0)
{
    int result=0;
    int p = pow(num,n);
    while(p+sum<x)
    {
       result += solution(x,n,num+1,sum+p);
        num++;
        p = pow(num,n);
    }
    if(p+sum==x)
        result++;
    return result;
}
int main()
{
    int x =100;
    int n = 2;
    cout<<solution(x,n);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int Reverse(int n,int result)
{
    if(n>0)
    {
        result = result*10 + n%10;
        return Reverse(n/10,result);
    }
    return result;
}

int main()
{
 int n;
 cin>>n;
 int result = Reverse(n,0);
 if(n==result)
    cout<<"Yes"<<endl;
 else
    cout<<"No"<<endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int i)
{
    if(n==1)return false;
    else if (i>(int)sqrt(n))return true;
    else if (n%i == 0) return false;
    return prime(n,i+1);
}
int main()
{
    int n;
    cin>>n;
//    cout<<prime(n,2)<<endl;
   if(prime(n,2)==true)cout<<"prime number"<<endl;
   else
    cout<<"Not an prime number"<<endl;
   return 0;
}

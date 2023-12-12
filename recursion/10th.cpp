#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b,int i)
{
    if((a*i)%b==0)return a * i;
      return  lcm(a,b,i+1);



}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b,1);
    return 0;
}

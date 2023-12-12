#include<bits/stdc++.h>
using namespace std;
bool visited[100];
int value[100];
int counter =0;
int fibo(int n)
{
    counter++;
   if(n<3)return 1;
   if(visited[n]==true)
    return value[n];
   else{
        visited[n]=true;

        value[n] = fibo(n-1) + fibo(n-2);
        return value[n];
   }

}
int main()
{
    int n;
    cin>>n;
for(int i=0;i<n;i++)
    visited[i]=false;
   cout<<fibo(n)<<endl;
   cout<<counter<<endl;
    return 0;
}

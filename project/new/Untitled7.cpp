#include<bits/stdc++.h>
using namespace std;
int maximum(int a[],int n,int m)
{
   if(n>=0)
   {
       if(a[n]>m)m=a[n];

       return maximum(a,n-1,m);
   }
   return m;
}
int minimum(int a[],int n,int m)
{
   if(n>=0)
   {
       if(a[n]<m)m=a[n];

       return minimum(a,n-1,m);
   }
   return m;
}
int main()
{
    int a[5]={84,2,56,78,9};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maximum(a,n-1,a[n-1])<<endl;
   cout<< minimum(a,n-1,a[n-1])<<endl;
    return 0;
}

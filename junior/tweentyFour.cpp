#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int i=0,j=n-1,m=0,s=0,d=0;
   while(i<=j)
   {
       if(a[i]>=a[j])
       {

           if(m%2==0)
            s=s+a[i];
           else
            d=d+a[i];
            m++;
            i++;
       }
       else
       {


           if(m%2==0)
            s=s+a[j];
           else
            d=d+a[j];
             j--;
             m++;
       }
   }
   cout<<s<<" "<<d<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int n = a.length();
    int flag =0;
    for(int i=0;i<n;i++)
     {
         if(a[i]>=65 && a[i]<=90)
            a[i] = a[i]+32;

         if(b[i]>=65 && b[i]<=90)
            b[i] = b[i]+32;


          if(a[i]<b[i])
         {
             flag =1;
             cout<<"-1"<<endl;
             break;
         }
         else if(a[i]>b[i])
         {
             flag =1;
             cout<<"1"<<endl;
             break;
         }
     }
     if(flag == 0)
        cout<<"0"<<endl;
    return 0;
}

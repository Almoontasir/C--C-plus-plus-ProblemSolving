#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,flag =0;
       cin>>n;
       int a[n+2],b[n+2];
       for(int i=1;i<=n;i++)
       {
           cin>>a[i];
           b[i]=i;
       }
       int tem;
       for(int i=1;i<=n;i++)
       {
           if(i<n && i>1)
           {
               if(a[i]==a[i+1])
              {
                 tem = b[i];
                 b[i]=b[i+1];
                 b[i+1]=tem;
                 i++;
              }
                else if(a[i]==a[i-1])
                {
                    tem = b[i];
                    b[i]=b[i-1];
                    b[i-1]=tem;

                }
                else
                {
                    flag = 1;
                    cout<<"-1"<<endl;
                    break;
                }
           }
           else if(i==n)
            {

                if(a[i]==a[i-1])
                {
                     tem = b[i];
                    b[i]=b[i-1];
                    b[i-1]=tem;

                }
                else
                {
                    flag = 1;
                    cout<<"-1"<<endl;

                    break;
                }

           }
           else if(i==1)
           {
               if(a[i]==a[i+1])
              {
                 tem = b[i];
                 b[i]=b[i+1];
                 b[i+1]=tem;
                 i++;
              }
              else
                {
                    flag = 1;
                    cout<<"-1"<<endl;

                    break;
                }
           }


       }

       if(flag == 0)
       {
           for(int i=1;i<=n;i++)
            cout<<b[i]<<" ";
           cout<<endl;
       }

       flag =0;

    }

    return 0;
}


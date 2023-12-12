#include<bits/stdc++.h>
using namespace std;
void print(int a[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void generateUtil(int a[],int b[],int c[],int i,int j,int n,int m,int len,bool flag)
{
    if(flag)
    {
        if(len)
            print(c,len+1);
        for(int k=i;k<n;k++)
        {
            if(!len)
            {
                c[len]=a[k];
                generateUtil(a,b,c,k+1,j,n,m,len,!flag);

            }
            else if(a[k]>c[len])
            {
                c[len+1]=a[k];
                generateUtil(a,b,c,k+1,j,n,m,len+1,!flag);
            }
        }
    }
    else
    {
        for(int l=j;l<m;l++)
        {
            if(b[l]>c[len])
            {
                c[len+1]=b[l];
                generateUtil(a,b,c,i,l+1,n,m,len+1,!flag);
            }
        }
    }
}

int main()
{
    int a[4]={10,20,30,40};
    int b[4]={5,15,25,35};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int c[n+m];
    generateUtil(a,b,c,0,0,n,m,0,true);

    return 0;
}

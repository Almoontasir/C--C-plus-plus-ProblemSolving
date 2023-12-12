#include<bits/stdc++.h>
using namespace std;
bool is_exist(int a[],int n,int i)
{
    if(i<0)return false;
    if(a[i]==n)return true;
    is_exist(a,n,i-1);

}
void recaman(int a[],int n,int i)
{

    if(i == n)
        return;
    if(i==0)
       a[i]=0;
    else if(a[i-1]-n>0 && !is_exist(a,a[i-1]-n,n-1))
    {
        a[i]=a[i-1]-n;
    }
    else{
        a[i]= a[i-1]+n;

    }
    return;

}
int main()
{
    int n = 6;
    int a[n];
    memset(a,-1,sizeof(a));
    recaman(a,n,0);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}

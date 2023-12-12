#include<bits/stdc++.h>
using namespace std;
int linearSearch(int *a,int n,int i,int qn)
{
    if(i<n)
    {
        if(a[i]==qn)return i;
        return linearSearch(a,n,i+1,qn);
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int q;
    cin>>q;
    int qn;
    while(q!=0)
    {
        cin>>qn;
        if(linearSearch(a,n,0,qn)==-1)cout<<"The value is not there"<<endl;
        else
            cout<<linearSearch(a,n,0,qn);
            q--;
    }
    return 0;
}

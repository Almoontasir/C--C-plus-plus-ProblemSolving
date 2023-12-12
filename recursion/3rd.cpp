#include<bits/stdc++.h>
using namespace std;
void recursive(int *a,int *n,int i,int j)
{
    if(j==*n)
    {
        *n = i;
        return;
    }
    if(a[j]%2 == 0) a[i++] = a[j];
    recursive(a,n,i,j+1);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     recursive(a,&n,0,0);
     for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

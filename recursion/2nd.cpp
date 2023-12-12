#include<bits/stdc++.h>
using namespace std;
void recursion(int i,int j,int a[])
{
    if(i<=j)
    {
        cout<<a[i]<<" "<<a[j]<<endl;
        recursion(i+1,j-1,a);
    }


}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    recursion(0,n-1,a);

    return 0;
}



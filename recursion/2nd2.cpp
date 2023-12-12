#include<bits/stdc++.h>
using namespace std;
void recursive(int a[],int i,int n){
    if(i<=n)
    {
        cout<<a[i]<<" "<<a[n]<<endl;
        recursive(a,i+1,n-1);
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    recursive(a,0,n-1);
    return 0;


}


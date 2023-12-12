#include<bits/stdc++.h>
using namespace std;
void solution(int a[],int l,int r,int sum =0)
{
    if(l>r)
    {
        cout<<sum<<" ";
        return;
    }
    solution(a,l+1,r,sum+a[l]);
    solution(a,l+1,r,sum);

}
int main()
{
    int a[]={5,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    solution(a,0,n-1);
    return 0;
}

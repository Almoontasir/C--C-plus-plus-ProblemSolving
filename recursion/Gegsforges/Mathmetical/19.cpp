#include<bits/stdc++.h>
using namespace std;
int m =0;
int result(int n,int r,int k,int sum=0,string s="")
{
    if(k==0)
    {
        if(sum==n)
        {
            r++;



        }

        cout<<s<<endl;

        return r;
    }
    for(int i=0; i<=n; i++)
    {
         m++;
//        if(sum>n)break;
        r = result(n,r,k-1,sum+i,s+to_string(i));

    }
    return r;

}
int main()
{
    int n=5;
    int value =4;
    cout<<result(value,0,n)<<endl;
    cout<<m<<endl;

    return 0;
}


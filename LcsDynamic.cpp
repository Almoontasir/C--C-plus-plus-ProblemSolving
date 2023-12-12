#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    s1 = "abcabcaa";
    s2 = "acbacba";
    int n = s1.length();
    int m = s2.length();
    int a[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                a[i][j]=0;
           else if(s1[i-1]==s2[j-1])
                a[i][j]=1+a[i-1][j-1];
            else
            {
                a[i][j]=max(a[i-1][j],a[i][j-1]);

            }
        }
    }

    for(int i=0;i<=n;i++)
    {

        for(int j=0;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;


    return 0;
}

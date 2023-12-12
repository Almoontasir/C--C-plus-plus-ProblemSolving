#include<bits/stdc++.h>
using namespace std;
int lcm(int a[][7],string s1,string s2,int m,int n)
{
    if(n==0 || m==0)
    {
        a[m][n]=0;
        return 0;
    }
    int t1,t2,t3;
    if(s1[m-1]==s2[n-1])
    {
        t1 =(a[m-1][n-1]>=0?a[m-1][n-1]:lcm(a,s1,s2,m-1,n-1));
       a[m][n]=1+t1;

    }
    else
    {
        t2 = (a[m][n-1]>=0?a[m][n-1]:lcm(a,s1,s2,m,n-1));
        t3 = (a[m-1][n]>=0?a[m-1][n]:lcm(a,s1,s2,m-1,n));
        a[m][n]=max(t2,t3);

    }
 return a[m][n];
}
string printLcs(int a[][7],string s,int m,int n,string new_string)
{
    if(m==0 || n==0)return new_string;
    int m1 = max(a[m][n-1],a[m-1][n]);
    int m2 = max(a[m-1][n-1],m1);

    if(m2==a[m-1][n-1])
    {
        return printLcs(a,s,m-1,n-1,new_string+s[m]);

    }
   else if(m2==a[m][n-1])
    {
        return printLcs(a,s,m,n-1,new_string);

    }
    else

        return printLcs(a,s,m-1,n,new_string);


}
int main()
{
    string X = "abcabcaa";
   string Y = "acbacba";
    int m = X.length();
    int n = Y.length();

    int dp[m+1][7];

    // assign -1 to all positions
    memset(dp, -1, sizeof(dp));

   lcm(dp,X, Y,  m,n);
   for(int i=0; i<=m; i++)
    {

        for(int j=0; j<=n; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }


   string s = printLcs(dp,X,m,n,"");
   cout<<s<<endl;



    return 0;
}

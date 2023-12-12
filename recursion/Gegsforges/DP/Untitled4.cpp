#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int dp[MAX][MAX];
int lcs(string s1,string s2,int n,int m,int i,int j)
{
    int &ret =dp[i][j];
    if(i == n || j==m)
        return 0;
    if(ret!=-1)
        return ret;
    if(s1[i]==s2[j])
    {
        ret = 1+lcs(s1,s2,n,m,i+1,j+1);
        return ret;
    }
    else
    {
        ret = max(lcs(s1,s2,n,m,i+1,j),lcs(s1,s2,n,m,i,j+1));
        return ret;
    }
}
void printLcs(string s,int m,int n,int i,int j,string new_string)
{
    if(i==m || j ==m)
    {
        new_string +=s[m];
        cout<<new_string<<endl;
        return;
    }
    int m1 = max(dp[i][j+1],dp[i+1][j]);
    int m2 = max(dp[i+1][j+1],m1);

    if(m2==dp[i+1][j+1])
    {
        return printLcs(s,m,n,i+1,j+1,new_string+s[m]);

    }
    if(m2==dp[m][n+1])
    {
        return printLcs(s,m,n,i,j+1,new_string);

    }
    if(m2==dp[m+1][n])
        return printLcs(s,m,n,i+1,j,new_string);


}
int main()
{
    string s1 = "abcabcaa";
    string s2 = "acbacba";
    int n = s1.length();
    int m = s2.length();
    memset(dp,-1,sizeof(dp));
    cout<<lcs(s1,s2,n,m,0,0)<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    printLcs(s1,n,m,0,0,"");
    return 0;
}

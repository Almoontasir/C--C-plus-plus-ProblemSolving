#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX][MAX];
void printLcs(string s,int m,int n,string new_string)
{
//    cout<<new_string<<endl;
//    cout<<a[m][n]<<endl;
    if(m==0 || n==0)
    {
        cout<<new_string<<endl;
        return ;
    }
    int m1 = max(a[m][n-1],a[m-1][n]);
    int m2 = max(a[m-1][n-1],m1);

    if(m2==a[m-1][n-1])
    {
//        cout<<s[m]<<endl;
        return printLcs(s,m-1,n-1,new_string+s[m-1]);

    }
     if(m2==a[m][n-1])
    {
         printLcs(s,m,n-1,new_string);

    }
    if(m2==a[m-1][n])
    {

         printLcs(s,m-1,n,new_string);
    }



}
int main()
{
    string s1,s2;
    s1 = "abcabcaa";
    s2 = "acbacba";
    int n = s1.length();
    int m = s2.length();

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
    printLcs(s1,n,m,"");


    return 0;
}


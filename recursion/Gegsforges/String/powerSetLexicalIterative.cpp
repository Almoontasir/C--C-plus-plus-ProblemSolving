#include<bits/stdc++.h>
using namespace std;
void powerset(string s,int n)
{
    for(int i=0;i<1<<n;i++)
    {
        string res="";

        for(int j=0;j<n;j++)
        {
            if(i&1<<j)
            {
                res +=s[j];
            }
        }
        if(i!=0)
            cout<<res<<endl;
    }
}
int main()
{
    string s="abc";
    powerset(s,s.length());

    return 0;
}

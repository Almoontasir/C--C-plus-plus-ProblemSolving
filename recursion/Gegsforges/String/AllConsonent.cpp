#include<bits/stdc++.h>
using namespace std;
int  Allconconent(string s,int count1,int n)
{
    if(n<0)return count1;
    if(s[n]=='a' ||s[n]=='e' ||s[n]=='i' ||s[n]=='o' ||s[n]=='u')
    {
        return Allconconent(s,count1,n-1);
    }
    else if(s[n]>97 && s[n]<123)
    {
        return Allconconent(s,count1+1,n-1);
    }
    else
        return Allconconent(s,count1,n-1);
}
int main()
{
    string s="geeksforgeeks portal";
   cout<<Allconconent(s,0,s.length()-1);

   return 0;
}

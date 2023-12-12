#include<bits/stdc++.h>
using namespace std;
bool is_consonent(char ch)
{
    ch= tolower(ch);
    return(!(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')&& (ch>97 && ch<123) );
}
int count_constent(string s,int n)
{
    if(n==0)return is_consonent(s[0]);
    return count_constent(s,n-1)+is_consonent(s[n]);
}
int main()
{
    string s="geeksforgeeks portal";
   cout<<count_constent(s,s.length()-1);

   return 0;
}

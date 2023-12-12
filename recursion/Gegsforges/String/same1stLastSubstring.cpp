// c++ program to count and print substrings with same
// first and last characters
#include<bits/stdc++.h>
using namespace std;
int count1=0,count2=0;

/* Function to count and print substrings with same first and
  last characters*/
void fastLastSame(string &res,string s,int pos)
{
    if(pos>= s.length())
        return;
    for(int i=pos; i<s.length(); i++)
    {
        string part = s.substr(pos,i+1-pos);
        if(i==pos && count1<s.length())
        {
            count1++;
        }
        else if(i==pos )
        {
            break;
        }
        int n = part.length();
        if(part[0]==part[n-1])
        {
            count2++;
            res +=part+" ";
        }
        fastLastSame(res,s,i+1);

    }
}
int main()
{
    string s="abcab";
    string res;
    fastLastSame(res,s,0);
    cout<<count2<<endl;
    cout<<res<<endl;
    return 0;
}

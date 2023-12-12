#include<bits/stdc++.h>
using namespace std;
void AllString(string s,int k,int pos)
{
    if(pos>=k)
    {
        cout<<s<<endl;
        return;
    }
    if(s[pos-1]=='1')
        AllString(s+'0',k,pos+1);
    if(s[pos-1]=='0')
    {

        AllString(s+'0',k,pos+1);

        AllString(s+'1',k,pos+1);
    }
}
int main()
{
   int k;
   cin>>k;
   string s="0";
   AllString(s,k,1);
   string s1 = "1";
   AllString(s1,k,1);
    return 0;
}

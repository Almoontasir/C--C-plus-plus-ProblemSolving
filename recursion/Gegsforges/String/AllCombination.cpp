#include<bits/stdc++.h>
using namespace std;
void allcombination(string res,string s,int pos)
{
    if(pos>=s.length())
    {
        cout<<res<<endl;
    }
    for(int i=pos;i<s.length();i++)
    {

        string part = s.substr(pos,i+1-pos);
        if(i!=pos && part[0]=='0')
            break;

        allcombination(res+" "+part,s,i+1);
    }
}
int main()
{
    string s = "1234";
    allcombination("",s,0);
    return 0;
}

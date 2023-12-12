#include<bits/stdc++.h>
using namespace std;
int count1=0;
void lexicographical(vector<string>&v,string s,int pos)
{
    if(pos>=s.length())
        return;
    for(int i=pos;i<s.length();i++)
    {
        string part= s.substr(pos,i+1-pos);
        if(i==pos && count1<s.length())
            count1++;
        else if(i==pos)
         return;
        v.push_back(part);
        lexicographical(v,s,i+1);



    }

}
int main()
{    string s="abcd";

     vector<string>v;
     lexicographical(v,s,0);
    sort(v.begin(),v.end());
    for(auto i = v.begin();i!=v.end();i++)
        cout<<*i<<endl;
    return 0;
}

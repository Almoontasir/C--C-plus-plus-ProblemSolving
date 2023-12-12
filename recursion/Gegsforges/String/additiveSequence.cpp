#include<bits/stdc++.h>
using namespace std;
void additiveSequence(vector<string>&result,string s,int pos,int pre,int last,int cur)
{
    if(pos>=s.length())
        return;
    for(int i=pos; i<s.length(); i++)
    {
        if(i!=pos && s[pos]=='0')
            break;

        if(i==pos)
        {
            pre = last;
            last = cur;
        }
            string part = s.substr(pos,i+1-pos);
            cur = atoi(part.c_str());
        if(i>1 && ( pre+last) == cur  )
        {

            string new_string = to_string(pre) +"+" + to_string (last)+"="+ to_string(cur);
            result.push_back(new_string);
        }

        additiveSequence(result,s,i+1,pre,last,cur);
    }
}
int main()
{
    vector<string>result;
    string s;
    getline(cin,s);
    additiveSequence(result,s,0,0,0,0);
    for(int i=0; i<result.size(); i++)
        cout<<result[i]<<endl;
    return 0;
}

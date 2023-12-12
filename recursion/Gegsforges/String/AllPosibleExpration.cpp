#include<bits/stdc++.h>
using namespace std;
void AllPosibleExpration(vector<string>&rs,string curExp,int n,string input,int target,int pos,int curVal,int last)
{
    if(pos>=n)
    {
        if(curVal == target)
            rs.push_back(curExp);
        return;
    }
    for(int i=pos;i<n;i++)
    {
        if(i!=pos && input[pos]=='0')
            break;
        string part = input.substr(pos,i+1-pos);
        int cur = atoi(part.c_str());
        if(pos ==0)
        {
            AllPosibleExpration(rs,curExp + part,n,input,target,i+1,cur,cur);
        }
        else{

            AllPosibleExpration(rs,curExp+"+"+part,n,input,target,i+1,curVal+cur,cur);
            AllPosibleExpration(rs,curExp+"-"+part,n,input,target,i+1,curVal-cur,-cur);
            AllPosibleExpration(rs,curExp+"*"+part,n,input,target,i+1,curVal-last+cur*last,cur*last);
        }
    }
}
int main()
{
    string input;
    int target;
    getline(cin,input);
    cin>>target;
    int n = input.length();
    vector<string>rs;
    AllPosibleExpration(rs,"",n,input,target,0,0,0);
    for(int i=0;i<rs.size();i++)
        cout<<rs[i]<<endl;
    return 0;
}

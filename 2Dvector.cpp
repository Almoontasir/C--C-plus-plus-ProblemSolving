#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> >stuff;
    for(int i=0;i<3;i++)
    {
        vector<int>tem;
        for(int j=0;j<3;j++)
        {
            tem.push_back(i);
        }
    stuff.push_back(tem);
    }
    for(int i=0;i<stuff.size();i++)
    {
        for(int j=0;j<stuff.size();j++)
            cout<<stuff[i][j]<<" ";
            cout<<endl;
    }
    return 0;
}

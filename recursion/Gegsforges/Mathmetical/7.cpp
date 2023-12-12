#include<bits/stdc++.h>
using namespace std;
//map<int,int>h;
set<int>s;
void result(vector<int>v,int n)
{
    if(v.size()<=n)
    {
        int ans =0;
        for(int i=0; i<v.size(); i++)
        {
            ans +=pow(2,i)*v[v.size()-i-1];
        }
//        h[ans]=1;
        s.insert(ans);
        if(v.back()==1)
        {
            v.push_back(0);
            result(v,n);
        }
        else
        {
            v.push_back(1);
            result(v,n);
            v.pop_back();
            v.push_back(0);
            result(v,n);
        }
    }

}


int main()
{
    int n=4;
    vector<int>v;
    v.push_back(1);
    result(v,n);
//    for(map<int,int>::iterator it=h.begin();it!=h.end();it++)
//    {
//        cout<<it->first<<" ";
//    }
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}

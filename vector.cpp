#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    for(int i=0;i<v.size(); i++)
        cout<<v[i]<<endl;
    int t,s;
    cin>>s;
    for(int i=0;i<s; i++)
    {

        cin>>t;
        v.insert(v.begin(),t);
    }

    for(int i=0;i<v.size(); i++)
    cout<<v[i]<<endl;
    v.push_back(55);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;




return 0;
}

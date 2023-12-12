#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int tem;
        cin>>tem;
        v.push_back(tem);
        for(int i=1;i<n;i++)
        {
            int tempotary;
            cin>>tempotary;
            if(tempotary>=v.back())
                v.push_back(tempotary);
            else
            {
                vector<int>::iterator it;
                it = upper_bound(v.begin(),v.end(),tempotary);
                *it = tempotary;
            }
        }
        cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            cout<<endl;


    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void solution(vector<int>v,int zero,int one,int i,int n)
{

    if(i==n)
    {
        for(int i=0;i<n;i++)
            cout<<v[i];
        cout<<" ";
        return;
    }
    if(one==zero)
    {
        v.push_back(1);
        solution(v,zero,one+1,i+1,n);
    }
    else
    {
        v.push_back(1);
        solution(v,zero,one+1,i+1,n);
        v.pop_back();
        v.push_back(0);
        solution(v,zero+1,one,i+1,n);

    }
}
int main()
{
    int n =4;
    vector<int>v;
    v.push_back(1);
    solution(v,0,1,1,n);
    return 0;
}

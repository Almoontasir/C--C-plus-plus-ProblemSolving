#include<bits/stdc++.h>
using namespace std;
bool is_leaf(int pre[],int &i,int n,int max)
{
    if(i>=n)return false;
    if(pre[i]<max)
    {
        i++;
        bool left = is_leaf(pre,i,n,pre[i-1]);
        bool right = is_leaf(pre,i,n,max);
        if(!left && !right)
            cout<<pre[i-1]<<" ";
        return true;
    }
    return false;
}
int main()
{
    int pre[]={6,3,2,4,5,8,7,9};
    int n=sizeof(pre)/sizeof(pre[0]);
    int i=0;
    is_leaf(pre,i,n,INT_MAX);

    return 0;
}

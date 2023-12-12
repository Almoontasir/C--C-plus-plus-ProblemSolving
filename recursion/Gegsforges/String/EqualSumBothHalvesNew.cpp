#include<bits/stdc++.h>
using namespace std;
void EqualSum(int n,int diff,string left,string right)
{
    if(n==0)
    {
        if(diff==0)
            cout<<left+right<<" ";
        return;
    }
    if(n==1)
    {
        if(diff==0)
        {
            cout<<left+"0"+right+" ";
            cout<<left+"1"+right+" ";
        }
        return;
    }
    if(abs(2*diff)<n)
    {
        EqualSum(n-2,diff,left+'0',right+'0');
        EqualSum(n-2,diff,left+'1',right+'1');
        EqualSum(n-2,diff-1,left+'0',right+'1');
        EqualSum(n-2,diff+1,left+'1',right+'0');
    }
}
int main()
{
    int n=5;
    EqualSum(n,0,"","");
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    unordered_set<int>st;
    st.insert(0);
    int pre=0,cur ;
    cout<<0<<" ";

    for(int i=1;i<n;i++)
    {
       cur = pre-i;
       if(cur<0 || st.find(cur)!=st.end())
        cur = pre +i;
       st.insert(cur);
       cout<<cur<<" ";
       pre = cur;
    }

    return 0;
}

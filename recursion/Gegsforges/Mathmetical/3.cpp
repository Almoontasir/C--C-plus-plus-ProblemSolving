#include<bits/stdc++.h>
using namespace std;
void StricklyPattern(int n,vector<int>v)
{
    if(n==0)
    {
        for(auto element:v)
            cout<<element;
            cout<<" ";


    }
   for(int i=0;i<=9;i++)
   {
         if(!v.empty() && v.back()>=i)
            continue;
         v.push_back(i);
         StricklyPattern(n-1,v);
         v.pop_back();
   }

}
int main()
{
    vector<int>v;
    StricklyPattern(2,v);
    return 0;
}

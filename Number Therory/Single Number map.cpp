#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
 int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
                return it->first;
        }
        return -1;
    }
int main()
{
 IO
 int n;
 cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++)
    cin>>a[i];
 cout<<singleNumber(a);


return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
 bool containsDuplicate(vector<int>& nums) {
       map<int,bool>mm;

       for(int i=0;i<nums.size();i++)
       {

           if(mm[nums[i]])
           {

               return true;
           }


               mm.insert({nums[i],true});


       }

      return false;
    }
int main()
{
 IO
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<containsDuplicate(v);
return 0;
}

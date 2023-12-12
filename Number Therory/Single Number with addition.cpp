#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e6+10;
int arr[N];
 int singleNumber(vector<int>& nums) {
       int  minimum = nums[0];
       for(int i=0;i<nums.size();i++)
       {
           minimum = min(minimum,nums[i]);
       }
       for(int i=0;i<nums.size();i++)
       {
           int x = nums[i]+abs(minimum);
           arr[x]++;
       }
       for(int i=0;i<1e6+10;i++)
       {
           if(arr[i]==1)
             return i-abs(minimum);

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


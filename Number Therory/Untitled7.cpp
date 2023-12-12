#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
 long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        vector<long long>prefixSum(N+1);
        prefixSum[0]=0;
        for(int i=0;i<N;i++)
        {
            prefixSum[i+1]=prefixSum[i]+Arr[i];
        }

         long maximum=0;
        for(int r = K;r<=N;r++)
        {
           long total = prefixSum[r]-prefixSum[r-K];
            maximum = max(maximum,total);
        }
        return maximum;
    }
//};
int main()
{
 int n,k;
 cin>>n>>k;
 vector<int>arr(n);
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];

 }
 cout<<maximumSumSubarray(k,arr,n);

return 0;
}

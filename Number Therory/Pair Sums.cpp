#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e6+10;
int arr[N];
int main()
{
 IO
 int n,k;
 cin>>n>>k;
 for(int i=0;i<n;i++)
  cin>>arr[i];
  sort(arr,arr+n);
  ll sum = 0;
  int i=0,j=n-1;
  int flag =0;
  while(i<j)
  {
      sum = arr[i]+arr[j];
      if(sum==k)
      {
        flag =1;
        cout<<"YES"<<nline;
        break;
      }
      else if(sum>k)
        j--;
      else
        i++;
  }
  if(flag ==0)
    cout<<"NO"<<nline;
return 0;
}

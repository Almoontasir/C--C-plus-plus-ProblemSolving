#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
const int N = 1e6+10;
int arr[N][26];
int main()
{
 IO
 int n,m;
 cin>>n>>m;
 int a[n],b[m];

 for(int i=0;i<m;i++)
 {
     cin>>b[i];
     if(b[i]>=0)
     {
         arr[b[i]][0]++;
     }
     else
     {
         int x = abs(b[i]);
         arr[x][1]++;
     }

 }
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
     if(a[i]>=0)
     {
        if(arr[a[i]][0]==1)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;

     }
     else
     {
         int x = abs(a[i]);
         if(arr[x][1]==1)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
     }
 }


return 0;
}

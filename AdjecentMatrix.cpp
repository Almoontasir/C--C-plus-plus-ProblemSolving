
#include<bits/stdc++.h>
using namespace std;
#define max  1000
int matrix[max][max];
int main()
{
    int n,e;
    cin>>n>>e;
    int n1,n2,cost;
   for(int i=0;i<e;i++)
   {
       cin>>n1>>n2>>cost;
       matrix[n1][n2]=cost;
       matrix[n2][n1]=cost;
   }
   cout<<endl;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
   }
   return 0;


}

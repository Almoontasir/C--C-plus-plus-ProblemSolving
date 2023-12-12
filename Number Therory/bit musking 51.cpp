#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
void printBinary(int num)
{
    for(int i=30;i>=0;i--)
        cout<<(num>>i&1);
        cout<<nline;
}
int main()
{
 IO
 int n;
 cin>>n;
 vector<int>musks(n,0);
 for(int i=0;i<n;i++)
 {
     int workers;
     int musk =0;
     cin>>workers;
     for(int j=0;j<workers;j++)
     {
         int days;
         cin>>days;
         musk = musk | (1<<days);
     }
     musks[i]=musk;
 }
// for(int i=0;i<n;i++)
// {
//     cout<<musks[i]<<endl;
//     printBinary(musks[i]);
// }
int maximum =0,p1 =0,p2=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        int intersection = musks[i] & musks[j];
        int common_days = __builtin_popcount(intersection);
        if(common_days>maximum)
        {
            maximum = common_days;
            p1 =i;
            p2 = j;
        }
//        cout<<i<<" "<<j<<" "<<common_days<<endl;


    }
}
cout<<p1<<" "<<p2<<" "<<maximum<<endl;


return 0;
}

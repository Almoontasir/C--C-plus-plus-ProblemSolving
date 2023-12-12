#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
   int t;
   cin>>t;
   for(;t--;)
   {
       ll n;
       cin>>n;
        string s;
        cin>>s;
        ll maxf,ans,dis;
        ans =0;
        ll alldis[10];
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<10;k++)
                alldis[k]=0;
            maxf=0,dis=0;
            for(int j=i;j<=i+99 && j<n;j++)
            {
                alldis[s[j]-'0']++;
                if(alldis[s[j]-'0']==1)
                    dis++;
                maxf=max(alldis[s[j]-'0'],maxf);
                if(dis>=maxf)
                    ans++;
            }
        }
        cout<<ans<<endl;
   }
   return 0;
}

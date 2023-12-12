#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int coin =0;
         long long sum =0;
         for(int i=1;i<=n;i++)
            {
                sum = sum+i;
                coin++;
                if(sum == n)
                {

                    cout<<coin<<endl;
                    break;
                }

                if(sum>n)
                {
                    coin--;
                    cout<<coin<<endl;
                    break;
                }

            }
     }
     return 0;
}

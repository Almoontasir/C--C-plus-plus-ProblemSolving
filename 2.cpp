#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

    if(k==0)
        {
            cout<<"NO"<<endl;

        }
     else  if(k%2==1)
        {
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2)
                cout<<i-1<<" "<<i<<endl;

        }
      else  if(k%4==0)
        {
            cout<<"NO"<<endl;


        }
      else  if(k%2==0)
        {
             cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2)
            {
                if(i%4==0)
                    cout<<i-1<<" "<<i<<endl;
                else
                    cout<<i<<" "<<i-1<<endl;
            }
        }

    }
    return 0;
}



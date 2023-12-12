#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll   long long
#define nline '\n'
int main()
{
    IO

    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll root_l = sqrtl(l);
//     cout<<root_l<<endl;
        ll root_r = sqrtl(r);
//     cout<<root_r<<endl;
        ll total = max(0LL,(root_r-root_l-1))*3;
//     ll total =(root_r-root_l-1);
//     cout<<total<<endl;
        if(root_l*(root_l+0)>=l && root_l*(root_l+0)<=r)
        {
            total ++;

        }
        if(root_l*(root_l+1)>=l && root_l*(root_l+1)<=r)
        {
            total ++;

        }
        if(root_l*(root_l+2)>=l && root_l*(root_l+2)<=r)
        {
            total ++;

        }

//     cout<<total<<endl;
        if(root_l!=root_r)
        {

            if(root_r*(root_r+0)>=l && root_r*(root_r+0)<=r)
            {
                total ++;

            }
            if(root_r*(root_r+1)>=l && root_r*(root_r+1)<=r)
            {
                total ++;

            }
             if(root_r*(root_r+2)>=l && root_r*(root_r+2)<=r)
            {
                total ++;

            }
        }

        cout<<total<<nline;



    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    ll sum1=0,sum2=0;
    ll total = 0;
    int i=-1,j=n;
    while(i<j)
    {
//        cout<<sum1<<" "<<sum2<<endl;
        if(sum1==sum2)
        {
            total = sum1;
            i++;
            j--;
            sum1 +=v[i];
            sum2 +=v[j];

        }
        else if(sum1>sum2)
        {
            j--;
            sum2 +=v[j];
        }
        else
        {
            i++;
            sum1 +=v[i];
        }
    }
    cout<<total<<nline;
return 0;
}

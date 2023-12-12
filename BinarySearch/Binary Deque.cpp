#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int main()
{
 IO
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        int sum =0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum = sum+v[i];
        }
        if(sum <s)cout<<-1<<nline;
        else if (sum==s)cout<<0<<nline;
        else
        {

            int high,low=0;
            int ans =0,maximum = 0,num_value=0;
            for(int i=0; i<n; i++)
            {
                ans +=v[i];
                if(ans ==s)
                {
                    high = i+1;
                   num_value = i+1;
                    break;
                }
            }
            maximum = num_value;
            for(int i = high;i<n;i++)
            {
                int j=i;
                while(j<n)
                {
                    if(v[j]==1)
                    {

                        break;
                    }
                    j++;
                    num_value++;
                    maximum = max(num_value,maximum);

                }
                i =j;
                while(low<n)
                {
                    if(v[low]==1)
                    {
                        low++;
                        break;
                    }
                    num_value--;
                    low++;
                    maximum=max(num_value,maximum);
                }

            }
            cout<<n-maximum<<nline;
        }



    }

    return 0;
}

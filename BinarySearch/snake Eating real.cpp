#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
vector<long long>v;
long long n;
int lower(long long k,int prefix[])
{
    if(v[0]>=k)
        return n;

    long l=0,r =n-1,temp =0;
    while(l<=r)
    {
        long long mid = (l+r)/2;
        if(v[mid]<k)
        {
            temp =mid;
            l = mid+1;

        }
        else
        {
            r = mid-1;
        }



    }
    long long ans = n-1-temp;
    l =0;
    r = temp;
    long long newTemp =0;
    while(l<=r)
    {
        long long mid = (l+r)/2;
        long long reqSum = (temp - mid+1)*k,haveSum =0;
        if(mid)
            haveSum = prefix[temp]-prefix[mid-1];
        else
            haveSum = prefix[temp];
        long long snakeRe = reqSum - haveSum;
        if(mid>=snakeRe)
        {

                newTemp = temp-mid+1;
                r = mid-1;
        }
        else
            l = mid +1;

    }
    ans +=newTemp;
    return ans;

}
bool isSol(long long mid,int prefix[],long long expected,long long index)
{
    long long haveSome = 0,reqSum = expected*(index - mid + 1);
    if(mid)
    {
        haveSome = prefix[index]-prefix[mid-1];
    }
    else
    {
        haveSome = prefix[index];
    }
    return reqSum-haveSome<=mid;
}
int main()
{
    IO
  long long t;
    cin>>t;
    while(t--)
    {
        long long q;
        cin>>n>>q;
        int prefix[n];


        for(int i=0; i<n; i++)
        {
            long long m;
            cin>>m;
            v.push_back(m);

        }
//
        sort(v.begin(),v.end());
        prefix[0]=v[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]= prefix[i-1]+v[i];
        }

        while(q--)
        {
            long long  expected;
            cin>>expected;


            cout<< lower(expected,prefix)<<endl;
        }
        v.clear();

    }
    return 0;
}


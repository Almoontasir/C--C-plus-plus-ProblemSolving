#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
vector<long long>v;
long long n;
int lower(long long element)
{
//    for(auto ele:v)
//        cout<<ele<<" ";
//    cout<<endl;
    long long low =0,high =n-1;
    while(high-low>1)
    {

        long long mid = low + (high-low)/2;
//         cout<<"high "<<high<<" mid "<<mid<<" low "<<low<<endl;
        if(v[mid]>=element)
            high = mid-1;
        else
             low = mid;
    }
//    cout<<low<<endl;
//    cout<<high<<endl;
//    cout<<"moom"<<endl;

    if(v[high]<element)return high;
    else if(v[low]<element)
        return low;
    else
        return -1;
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
            long long index = lower(expected);
//            cout<<index<<endl;
//           long long  remain = index;

           long long  ans = n - index -1;
           long long  low = 0,high = index;
           while(high-low>1)
           {
              long long  mid = low + (high -low)/2;
               if(isSol(mid,prefix,expected,index))
               {
                   high = mid;
               }
               else
               {
                   low = mid+1;
               }
           }
           if(isSol(low,prefix,expected,index))
           {
               ans = ans + (index-low+1);
           }
           else if(isSol(high,prefix,expected,index))
           {
               ans +=(index-high+1);
           }


            cout<< ans <<endl;
        }
        v.clear();

    }
    return 0;
}



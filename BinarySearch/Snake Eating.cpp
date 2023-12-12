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
int main()
{
    IO
  long long t;
    cin>>t;
    while(t--)
    {
        long long q;
        cin>>n>>q;


        for(int i=0; i<n; i++)
        {
            long long m;
            cin>>m;
            v.push_back(m);
        }
//        for(int i=0;i<n;i++)
//            cout<<v[i]<<" ";
//        cout<<endl;
        sort(v.begin(),v.end());
        while(q--)
        {
            long long  expected;
            cin>>expected;
            long long index = lower(expected);
//            cout<<index<<endl;
           long long  remain = index;

           long long  ans = n - index -1;

            while(remain>0)
            {
                long long total = v[index]+remain;
                if(total>=expected)
                {
                    remain = total - expected -1;
                    ans ++;
                    index --;

                }
                else
                {
                    break;
                }
            }
            cout<< ans << '\n';
        }
        v.clear();

    }
    return 0;
}

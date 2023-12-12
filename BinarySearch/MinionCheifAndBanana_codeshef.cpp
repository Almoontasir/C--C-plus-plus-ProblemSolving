#include<bits/stdc++.h>
using namespace std;
const long long N = 1e9+10;
long long piles;
long long hours;
////long long *bananas = new long long(N);
long long bananas[N];
// long *bananas =new  long(N);

bool findReslt(long long b)
{
    long long  total=0;
    for(int i=0; i<piles; i++)
    {
        long long n;
        if(bananas[i]%b)
            n = bananas[i]/b+1;
        else
            n = bananas[i]/b;
        total +=n;

    }
    return total<=hours;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>piles>>hours;

        for(int i=0; i<piles; i++)
            cin>>bananas[i];
        long long  low =0,high =1e9;
        while(high-low>1)
        {

            long long mid = low + (high-low)/2;

            if(findReslt(mid))
                high = mid;
            else
                low = mid+1;
        }
        if(findReslt(low))
            cout<<low<<endl;
        else
            cout<<high<<endl;
//        cout<<low<<" "<<high<<endl;

    }
    return 0;
}

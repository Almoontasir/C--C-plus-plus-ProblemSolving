#include<bits/stdc++.h>
using namespace std;
//const int N = 1e5+10;
const int modulo = 10000003;
//int boards[N];
//int   n;
bool isSol(long long time,int p,vector<int> b)
{
    int n = b.size();
    long long sum =0,painter =1;

       for(int i=0;i<n;i++)
       {
           sum +=b[i];
           if(sum>time)
           {
               sum = b[i];
               painter++;

           }
       }
    return painter<=p;
}
int bs(int   a,int b,vector<int> bo)
{
    int n = bo.size();

    long long total=0,maximum=0;
        for(int i=0;i<n;i++)
        {
            if(bo[i]>maximum)
                maximum = bo[i];
            total +=bo[i];
        }
    long long low =maximum,high = total;
    while(high-low>1)
    {
        long long mid = low + (high-low)/2;
        if(isSol(mid,a,bo))
        {
            high = mid;
        }
        else
            low = mid+1;

    }
    if(isSol(low,a,bo))
        return (b*low)%10000003;
    else
        return (b*high)%10000003;
}
int main()
{
    int a,b;
    a=10,b=1;

//    for(int i=0;i<n;i++)
//        cin>>boards[i];
//   int boards[]={1,8,11,3};
//   int n = sizeof(boards)/sizeof(boards[0]);
vector<int>v;
v.push_back(1);
v.push_back(8);
v.push_back(11);
v.push_back(3);
//   cout<<n<<endl;

    cout<<bs(a,b,v);

    return 0;
}

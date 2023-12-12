#include<bits/stdc++.h>
using namespace std;
//const int N = 1e5+10;
const int modulo = 10000003;
//int boards[N];
//int   n;
bool isSol(long long time,int p,int b[],int n)
{

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
int bs(int n,int a,int  bo[])
{


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
        if(isSol(mid,a,bo,n))
        {
            high = mid;
        }
        else
            low = mid+1;

    }
    if(isSol(low,a,bo,n))
        return (low);
    else
        return (high);
}
int main()
{
    int a,n;
    a=2,n=3;

//    for(int i=0;i<n;i++)
//        cin>>boards[i];
//   int boards[]={1,8,11,3};
//   int n = sizeof(boards)/sizeof(boards[0]);

//   cout<<n<<endl;
int b[]={15,17,20};


    cout<<bs(n,a,b);

    return 0;
}


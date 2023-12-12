#include<bits/stdc++.h>
using namespace std;
long long n;
long long  findSol()
{
    if(n<3)
        return 3-n;

    int num = log2(n);
    if(pow(2,num)==n)
        return 1;
    long long minimun = 1e10;
    for(int i=0; i<num; i++)
    {
        unsigned long long int   tem = pow(2,num)+pow(2,i);

       unsigned long long int tem1 = pow(2,num+1)+pow(2,i);

//        if(tem==n || tem1==n)
//            return 0;
        long long value1 = n-tem;
        long long value2 = tem-n;
        long long value3 = n-tem1;
        long long value4 = tem1-n;
        if(value1>=0 && value1<minimun)
            minimun=value1;

        if(value2>=0 && value2<minimun)
            minimun = value2;
        if(value3>=0 && value3<minimun)
            minimun = value3;
        if(value4>=0 && value4<minimun)
            minimun = value4;
    }
    return minimun;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        cout<<findSol()<<endl;
    }

    return 0;
}

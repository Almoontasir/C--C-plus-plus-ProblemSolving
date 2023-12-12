#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s = log10(n) +1;
    int i=0;
    double f,in = n;
    int value,result =0;
    int s1 =s;
    while(s1>0)
    {
        f =in/10.0 ;
        f = modf(f,&in);
        value = f*10;
        result = result*10 ;
        cout<<result<<endl;
        cout<<value<<endl;
        result = result + value;
        s1--;
    }
    cout<<result<<endl;
    return 0;
}

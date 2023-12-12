#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int a,b,sum  = 0;
        a = abs(97-s[0]);
        b = abs(a-26);
        if(a<b)
            sum = sum + a;
        else
            sum = sum + b;
    for(int i=0;i<n-1;i++)
    {
        a = abs(s[i]-s[i+1]);
        b = abs(a-26);
        if(a<b)
            sum = sum + a;
        else
            sum = sum + b;

    }
    cout<<sum<<endl;
    return 0;
}

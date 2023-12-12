#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int i=0,j=0;
    int n=t.length();


        while(j<n)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
                j++;
        }
        cout<<i+1<<endl;

    return 0;
}

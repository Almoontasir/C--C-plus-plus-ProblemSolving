#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int a[5];
  for(int i=1;i<5;i++)
    cin>>a[i];
  cin>>s;
  int n=s.length();
  int m,sum=0,l;
  for(int i=0;i<n;i++)
    {
        m=s[i];
        l = m-48;
        sum = sum + a[l];

    }
    cout<<sum<<endl;;

    return 0;
}

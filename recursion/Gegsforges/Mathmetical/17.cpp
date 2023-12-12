#include<bits/stdc++.h>
using namespace std;
void gray(int n,int last,int i,int current,int l,string s)
{
  if(i>l)
  {
      s +=to_string(current);
      reverse(s.begin(),s.end());
      cout<<s<<endl;
      return;
  }
  last = current;
  current = n%10;
  if(i!=1)
  {
      cout<<current<<" "<<last<<endl;
      int m = current^last;
      s +=to_string(m);
  }
    gray(n/10,last,i+1,current,l,s);
}
int main()
{
    int n=111 ;
    int l = log10(n)+1;
    gray(n,0,1,0,l,"");

    return 0;
}

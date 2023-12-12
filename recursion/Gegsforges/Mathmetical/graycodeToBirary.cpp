#include<bits/stdc++.h>
using namespace std;
void sol(string s1,int last,int i,string s)
{
    if(i==s1.length())
    {
        cout<<s<<endl;
        return;
    }
    char new_string = s1[i];
    int m;
     int curr = new_string-'0';
    if(i!=0)
    {
         m = curr^last;
         cout<<curr<<" "<<last<<" "<<m<<endl;
        s +=to_string(m);
    }
    else
    {
        m = curr;

        s +=to_string(curr);
    }
    sol(s1,m,i+1,s);
}
int main()
{
    int n=100;
    string s = to_string(n);
//    reverse(s.begin(),s.end());
//    char new_string = s[0];
//   int  m = new_string - '0';
//    cout<<m<<endl;
sol(s,0,0,"");
    return 0;
}

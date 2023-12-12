#include<bits/stdc++.h>
using namespace std;
int str_length(string s, int i)
{
    if(s[i]!='\0')
    {
        return str_length(s,i+1);
    }
    return i;
}
int string_contate();
int main()
{
    string s,s1,s2;
    getline(cin,s);
//    cout<<str_length(s,0);
    getline(cin,s1);
    s2 = s + s1;
    cout<<s2<<endl;



    return 0;
}

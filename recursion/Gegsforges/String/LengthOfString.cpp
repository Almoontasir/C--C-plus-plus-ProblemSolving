#include<bits/stdc++.h>
using namespace std;
int str_length(char s[])
{
cout<<s+1<<endl;
if(*s=='\0')return 0;
return 1 + str_length(s+1);
}
int main()
{
    char s[] = "dkfdkfdj";
    cout<<str_length(s);
    return 0;
}

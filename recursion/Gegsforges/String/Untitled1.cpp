#include<bits/stdc++.h>
using namespace std;
void allString(char* digit,string prefix,int k)
{
    if(k<=0)
    {
        cout<<prefix<<endl;
        return;
    }
    for(int i=0;i<strlen(digit);i++)
    {
        allString(digit,prefix+digit[i],k-1);
    }
}
int main()
{
    char digit[100]={'0','1'};
    allString(digit,"",3);
    return 0;
}

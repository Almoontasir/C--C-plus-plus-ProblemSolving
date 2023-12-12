#include<bits/stdc++.h>
using namespace std;
int febo[100];
void febon( )
{
    febo[0]=0,febo[1]=1;
    for(int i=2;i<20;i++)
        febo[i]=febo[i-1]+febo[i-2];
    for(int i=0;i<20;i++)
        printf("%2d %d\n",i+1,febo[i]);
}

int main()
{
  febon();

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char input[]="1214";
    int l=strlen(input);
    for(int i=0;i<pow(2,l-1);i++)
    {
        int k=i;
        int x=0;
        cout<<input[x++];

        for(int j=0;j<l-1;j++)
        {
            if(k & 1)
                cout<<" ";
            cout<<input[x++];
            k = k>>1;
        }
        cout<<endl;
    }
    return 0;
}

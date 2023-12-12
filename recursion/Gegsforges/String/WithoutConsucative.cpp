
#include<bits/stdc++.h>
using namespace std;
void AllString(char list1[],string prefix,int n,int k)
{
    if(k<1)
    {
        cout<<prefix<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        int pre = atoi(prefix.c_str());
        int last = pre%10;
        if(last == 1 && list1[i]=='1')
            return;

        AllString(list1, prefix + list1[i],n,k-1);


    }
}
int main()
{
    string prefix = "";
    char list1[100];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        cin>>list1[i];
    int k ;
    cin>>k;
    int n = strlen(list1);

    AllString(list1,prefix,n,k);

    return 0;
}

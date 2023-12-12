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

        AllString(list1, prefix + list1[i],n,k-1);


    }
}
int main()
{
    string prefix = "";
    char list1[100]={'a','b'};
//    int t;
//    cin>>t;
//    for(int i=0;i<t;i++)
//        cin>>list1[i];
    int k ;
    cin>>k;
    int n = strlen(list1);
    cout<<n<<endl;

    AllString(list1,prefix,n,k);

    return 0;
}

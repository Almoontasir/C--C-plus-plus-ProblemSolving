#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int L=0,R=n-1,M;
    int item;
    int found =0;
    cin>>item;
    while(L<=R)
    {
        M = L + (R-L)/2;
        if(a[M]==item)
        {
            cout<<M<<endl;
            found =1;
            break;

        }
      else if(a[M]<item)
       {
           R = M -1;
       }
       else
       {
           L = M+1;
       }
    }
    if(found = 0)
        cout<<"The value is not in the list"<<endl;
    return 0;
}

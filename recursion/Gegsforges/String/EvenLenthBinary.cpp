#include<bits/stdc++.h>
using namespace std;
void EvenLenth(int a[],int n,int m,int sumF,int sumB,string s)
{
    if(m<1)
    {
        if(sumF == sumB)
        {
            cout<<s<<endl;
        }
        return;
    }
    for(int i=0;i<2;i++)
    {
        if(m<=n)
            sumF += a[i];
        else
            sumB += a[i];

        EvenLenth(a,n,m-1,sumF,sumB,s + to_string(a[i]));
    }
}
int main()
{
    int n,m;
    cin>>n;
    m = 2*n;
    int a[]={0,1};

    EvenLenth(a,n,m,0,0,"");
    return 0;
}

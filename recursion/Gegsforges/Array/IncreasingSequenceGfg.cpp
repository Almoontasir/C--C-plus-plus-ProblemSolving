#include<bits/stdc++.h>
using namespace std;
void increasingSequence(int data[],int len,int k,int n)
{
    if(len==k)
    {
        for(int i=0;i<k;i++)
            cout<<data[i]<<" ";
        cout<<endl;
        return;
    }
    int i = (len==0)?1:data[len-1]+1;
    while(i<=n)
    {
        data[len]= i;
        increasingSequence(data,len+1,k,n);
        i++;
    }
}
int main()
{
    int n =5;
    int k =3;
    int data[100];
    increasingSequence(data,0,k,n);

    return 0;
}

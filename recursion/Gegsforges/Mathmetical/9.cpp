#include<bits/stdc++.h>
using namespace std;
int value =0;
void result(int x,int n,int remain)
{
    int r = pow(x,n);
    if(r==remain)
    {
        value++;

        return ;
    }
    if(r>remain)
        return ;
     result(x+1,n,remain-r);
     result(x+1,n,remain);



}
int main()
{
    result(1,2,100);
    cout<<value<<endl;

    return 0;
}

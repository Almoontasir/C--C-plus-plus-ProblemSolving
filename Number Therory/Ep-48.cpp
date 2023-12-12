#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
void printBinary(int num)
{
    for(int i= 10; i>=0; i--)
    {
        cout<<(num >> i&1);
    }
    cout<<endl;
}
int main()
{
    IO
// printing binary
    printBinary(9);
    int a=9;
    int i=0;
// checking a value is set or usset
    if((a&1<<i)==1)
        cout<<"set"<<endl;
    else
        cout<<"unset"<<endl;
//    making a digit set
    int x =9;
    int j = 1;
    x = x | 1<<j;
    printBinary(x);
//     making a digit unset
    int z =9;
    int k = 3;
    int m = (pow(2,11)-1);
    int y = (1<<k)^m;
    int r = z&y;

    printBinary(r);
    printBinary(a&(~(1<<k)));
//     making a digit inverse
    printBinary(~z);
//    toggole a bit
 int l = 9>>9;
    printBinary(l);
    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;






    return 0;
}

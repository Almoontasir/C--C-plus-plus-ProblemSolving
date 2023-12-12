#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
void printBinary(int num)
{
    for(int i=10;i>=0;i--)
        cout<<(num>>i&1);
        cout<<nline;
}

int main()
{
// IO
//printing a to z
 for(char c = 'A';c<='Z';c++)
 {
     printBinary(int(c));
 }
// convert higher  case to lower case by changing 5th digit unset to set
char A = 'A';
char a = A|(1<<5);
cout<<a<<endl;
//printing 1<<5
cout<<char(1<<5)<<endl;
a = A|' ';
cout<<a<<nline;
// convert lower  case to higher case by changing 5th digit set to unset
A = a & (~(1<<5));
cout<<A<<nline;
A = a & '_';
cout<<A<<nline;
//unseting from 4th bit to lsb
 int integer = 59;
printBinary(integer);
int i =4;
int  l = integer&(~((1<<(i+1))-1));
printBinary(l);
//unseting from msb to 4th bit
int k = integer & ((1<<(i))-1);
printBinary(k);
//checking a number is 2th power or not
int n = 6;
if(n & (n-1))
    cout<<"not 2N power number"<<endl;
else
    cout<<"2N power number"<<endl;



return 0;
}

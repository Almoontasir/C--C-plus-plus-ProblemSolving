#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,counter = 0;
    cin>>l>>b;
    while(l<=b){
          counter++;
          l *=3;
          b *=2;

          }
          cout<<counter<<endl;
          return 0;
}

#include<bits/stdc++.h>
using namespace std;
void test(int n)
{
    cout<<n<<endl;
   if(n>10)return;
   test(n+2);
   test(n+1);
}
int main()
{
    test(1);
    return 0;
}

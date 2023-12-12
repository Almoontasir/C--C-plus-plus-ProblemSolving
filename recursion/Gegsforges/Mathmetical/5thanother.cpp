#include<bits/stdc++.h>
using namespace std;
int getAllHelper(int base ,int power,int Remaining_sum)
{
    int result = pow(base,power);
    if(result == Remaining_sum)
        return 1;
    if(result>Remaining_sum)
        return 0;
    int x = getAllHelper(base+1,power,Remaining_sum-result);
    int y = getAllHelper(base+1,power,Remaining_sum);
    return x+y;
}
int main()
{
    cout<<getAllHelper(1,2,100);
    return 0;
}

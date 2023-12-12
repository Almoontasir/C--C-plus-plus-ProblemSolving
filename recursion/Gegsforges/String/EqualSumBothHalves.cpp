#include<bits/stdc++.h>
using namespace std;
void findingHalfSum(char res[],int diff,int Start,int End)
{
    if(abs(diff)>(End-Start+1)/2)
    return;
    if(Start>End)
    {
        if(diff==0)
            cout<<res<<" ";
        return;
    }
    res[Start]='1',res[End]='1';
    findingHalfSum(res,diff,Start+1,End-1);
    res[Start]='0',res[End]='0';
    findingHalfSum(res,diff,Start+1,End-1);
    res[Start]='1',res[End]='0';
    findingHalfSum(res,diff-1,Start+1,End-1);
    res[Start]='0',res[End]='1';
    findingHalfSum(res,diff+1,Start+1,End-1);
}
int main()
{
    int n = 5;

    // allocate string containing 2*n characters
    char out[n + 1];

    // null terminate output array
    out[n] = '\0';

    findingHalfSum(out, 0, 0, n - 1);


    return 0;

}

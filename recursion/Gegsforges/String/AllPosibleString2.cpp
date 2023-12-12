#include<bits/stdc++.h>
using namespace std;
void Binary_combination(int differ,int End,int Start,char* a)
{
    if(abs(differ)>(End - Start + 1)/2)
    {
        return;
    }
    if(Start>End)
    {
        if(differ==0)
        {
            cout<<a<<endl;
        }
    }
    a[Start] = '0', a[End] = '1';
    Binary_combination(differ+1,End-1,Start+1,a);

    a[Start] ='1', a[End] = '0';
    Binary_combination(differ-1,End-1,Start+1,a);

    a[Start] = '1', a[End] = '1';
    Binary_combination(differ,End-1,Start+1,a);

    a[Start] = '0', a[End] = '0';
    Binary_combination(differ,End-1,Start+1,a);
}
int main()
{
    int n;
    cin>>n;
    char a[2*n+1];
    Binary_combination(0,2*n-1,0,a);
    return 0;
}

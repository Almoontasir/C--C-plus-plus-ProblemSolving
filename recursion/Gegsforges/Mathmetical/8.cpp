#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void result(int n)
{
    if(n==0)
    {
        cout<<v.back()<<endl;
        return;

    }
    if(v.empty())
        v.push_back(n%10);
    else
    {
        v.push_back(v.back()+n%10);
    }
    result(n/10);

}
int main()
{
    int n =678;
    result(n);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void printSequence(int n,int sum,vector<int>v)
{
    if(sum >= n)
    {
        if(sum==n)
        {

            for(auto element:v)
                cout<<element<<" ";
            cout<<endl;
        }
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(!v.empty() && v.back()<i)
            break;
        else
            v.push_back(i);

        printSequence(n,sum+i,v);
        v.pop_back();

    }
}
int main()
{
    vector<int>v;
//    v.push_back(5);
//    v.push_back(4);
////    cout<<v.back()<<endl;
//////    v.pop_back();
////    cout<<v.back()<<endl;
//    for(auto element:v)
//        cout<<element<<" ";
    int n=5;
    printSequence(n,0,v);
    return 0;
}

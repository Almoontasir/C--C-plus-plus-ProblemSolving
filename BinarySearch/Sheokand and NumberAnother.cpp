#include<bits/stdc++.h>
using namespace std;
set<int>s;
int n;
void calculation()
{
    for(int i=0;i<=30;i++)
    {
        for(int j=0;j<=30;j++)
        {
            if(i!=j)
            {
                s.insert(pow(2,i)+pow(2,j));
            }
        }
    }
}
int findSol()
{
    if(n<3)return 3-n;

//    auto it = lower_bound(s.begin(),s.end(),n);
     auto it = s.lower_bound(n);
     if(*it == n)return 0;
     return min(n-*prev(it),*it-n);

}
int main()
{
     calculation();
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        cout<<"sol="<<findSol()<<endl;
    }
    return 0;
}

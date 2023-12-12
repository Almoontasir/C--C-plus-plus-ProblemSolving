#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,counter1 = 0,counter2 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a;
            if(a == 1)
                counter1++;
        }
        if(counter1 >= 2)
            counter2++;
        counter1 = 0;
    }
    cout<<counter2<<endl;
    return 0;
}

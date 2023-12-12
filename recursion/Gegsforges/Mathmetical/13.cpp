//not solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int m =10;
    int minimun = min(m,n);
    int pure_sqr = minimun;
    while(pure_sqr!=0)
    {
        int n = sqrt(pure_sqr);
        if(n*n==pure_sqr)
            break;
        pure_sqr -=1;


    }

    int i=pure_sqr,j,result=0;;
    while(i!=m)
    {
        result++;
        j = i;
        while(j!=n)
        {
            result++;
            j = 2*j;
            while(j>n)
                j /=2;

        }
        i = i*2;
        while(i>m)
            i = i/2;
    }
    cout<<result<<endl;
    return 0;
}

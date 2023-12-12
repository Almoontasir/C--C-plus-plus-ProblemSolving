#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    long long int total;
    cin>>n>>total;
    int number;
    char sig;
    for(int i=0;i<n;i++)
        {
            cin>>sig>>number;
            if(sig =='+')
                total = total + number;
            else{


                total = total - number;
                 if(total<0)
                  {
                       total = total + number;
                       counter++;
                  }


            }
        }
        cout<<total<<" "<<counter<<endl;

    return 0;
}

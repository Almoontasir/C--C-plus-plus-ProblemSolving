#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[2000];
    bool check[1000];
    for(int i=0;i<2000;i++)
    {
        cin>>a[i];
        if(a[i]=='}')
            break;
    }
    if(a[1]=='}')
        {
            cout<<"0"<<endl;
            return 0;
        }
   for(int i=1; ;i+=2)
       {
           check[i]=false;
           if(a[i+1]=='}')
            break;
       }
    int counter=0,counter1=0;




    for(int i=1; ;i+=2)
    {

        counter++;

        if(check[i]==true && a[i+1]=='}' )
            break;
        if(check[i]==true )
            continue;

        for(int j=1; ;j+=2)
        {

            if(i==j && a[j+1]=='}' )
            break;
            if(i==j)
                continue;

            if(a[i]==a[j])
            {
                check[j]=true;
                counter1++;
            }
            if(a[j+1]=='}')
            break;

        }

        if(a[i+1]=='}')
            break;

    }

    cout<<counter-counter1<<endl;


    return 0;
}

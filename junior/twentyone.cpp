#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101],b[101];
    scanf("%s",a);
    int n =strlen(a);
    int counter =0,m=-1,flag =0;
   for(int i=0;i<n;i++)
        {
            flag =0;
             for(int k=0;k<m+1;k++)
            {

                if(a[i]==b[k])
                    {
                        flag = 1;
                        break;
                    }
            }
        if(flag ==0)  {


             for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;




            if(a[i]==a[j])

                {

                    m++;
                    b[m] = a[i];
                    counter++;
                }

        }

        }


    }


    int result = n-counter;
    if(result%2==0)
      cout<<"CHAT WITH HER!"<<endl;
      else
        cout<<"IGNORE HIM!"<<endl;


    return 0;
}

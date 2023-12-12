#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int flag=0,i,j;
    int n = s.length();
    cout<<n<<endl;
    for(i=0,j=n-1;i<n;i++,j--)
    {

        if((s[i]>=48 && s[i]<=57)||(s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        {


            if((s[j]>=48 && s[j]<=57)||(s[j]>=65 && s[j]<=90)||(s[j]>=97 && s[j]<=122))
            {

                if(s[i]!=s[j])
                {
                    flag =1;
                    break;
                }
                else
                {
                    i++;
                    j--;

                }

            }
            else{
                j--;
            }
        }
        else{
            i++;
        }
    }
    if(flag==0)cout<<"palindrome"<<endl;
    else cout<<"not"<<endl;
    return 0;
}

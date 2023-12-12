#include<bits/stdc++.h>
using namespace std;
void copy_string(char* s1,char* s2,int n,int i)
{
        if(i==n)
            {
                s2[n]='\0';
               return;
            }
        s2[i]=s1[i];
        copy_string(s1,s2,n,i+1);

}
int main()
{
    char s1[]="gf";
    char s2[]="defgh";
    copy_string(s1,s2,strlen(s1),0);
    cout<<s2<<endl;
    return 0;
}

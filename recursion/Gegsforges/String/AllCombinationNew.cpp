#include<bits/stdc++.h>
using namespace std;
void allcombination(char input[],char output[],int index,int outLength)
{
    if(input[index]=='\0')
    {
        output[outLength]='\0';
        cout<<output<<endl;
        return;
    }
    output[outLength]=input[index];
    output[outLength+1]=' ';
    allcombination(input,output,index+1,outLength+2);
    if(input[index+1]!='\0')
        allcombination(input,output,index+1,outLength+1);
}
int main()
{
    char input[]="12145";

    char output[100];
    allcombination(input,output,0,0);
    return 0;
}

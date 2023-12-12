#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string str,int low,int high)
{
    while(low<high)
    {
        if(str[low] != str[high])
            return false;
        low++;
        high--;
    }
    return true;
}
void sending_all_partion(vector<vector<string> > &all_partion,vector<string>&current_partion,int start,int n,string str)
{
    if(start>=n)
    {
        all_partion.push_back(current_partion);
        return;
    }
    for(int i=start;i<n;i++)
    {
        if(is_palindrome(str,start,i))
        {
            current_partion.push_back(str.substr(start,i-start+1));
            sending_all_partion(all_partion,current_partion,i+1,n,str);
            current_partion.pop_back();
        }
    }
}
void print(string str)
{
    vector<vector<string> >all_partion;
    vector<string>current_partion;
    int n = str.length();
    sending_all_partion(all_partion,current_partion,0,n,str);
    for(int i=0;i<all_partion.size();i++)
    {
        for(int j =0;j<all_partion[i].size();j++)
            cout<<all_partion[i][j]<<" ";
        cout<<endl;
    }

}
int main()
{
    string str;
    getline(cin,str);
    print(str);

    return 0;
}

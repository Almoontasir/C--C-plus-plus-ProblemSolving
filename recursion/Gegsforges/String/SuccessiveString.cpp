#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    if(s.size()>1 && s[0]=='0')
        return false;

    return true;
}
int Integer(string a,int pos)
{
    if(pos>=a.length())
        return 0;
    return a[pos]-'0';
}
string sum(string a,string b)
{
    string add = "";
    int carry=0;
    int n1= a.length()-1;
    int n2 = b.length()-1;

    while(n1 >-1 || n2>-1)
    {
        int s = Integer(a,n1)+Integer(b,n2)+carry;

        add +=(s%10+'0');

        carry = s/10;
        n1--;n2--;
    }
    if(carry)
        add += (carry + '0');
          reverse(add.begin(),add.end());
    return add;
}
bool Succisive(list<string>&res,string a,string b,string c)
{

    if(!isValid(a)|| !isValid(b))
        return false;
    string s = sum(a,b);
//    cout<<"a "<<a<<" b "<<b<<" c "<<c<<" sum "<<s<<endl;
    if(s==c)
    {
        res.push_back(s);
        return true;
    }
    if(s.size()>=c.size()||s!=c.substr(0,s.size()))
        return false;
    else
    {
        res.push_back(s);
       return Succisive(res,b,s,c.substr(s.size()));
    }
}
list<string>print(string s)
{
    list<string>res;
    int l= s.length();
    for(int i=1;i<=l/2;i++)
    {
        for(int j=1;j<=(l-i)/2;j++)
        {
            if(Succisive(res,s.substr(0,i),s.substr(i,j),s.substr(i+j)))
            {
                res.push_front(s.substr(i,j));
                res.push_front(s.substr(0,i));
                return res;
            }
        }

    }
     res.clear();
        return res;
}
int main()
{
    string s ="235813";
 list<string>res = print(s);
 for(auto it=res.begin();it!=res.end();it++)
        cout<<*it<<endl;
 return 0;
}

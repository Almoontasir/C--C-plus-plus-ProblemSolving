#include<bits/stdc++.h>
using namespace std;
bool is_valid(string num)
{
    if(num.size()>1 && num[0]=='0')
        return false;
    return true;
}
int Int(string a,int pos)
{
    if(pos>=a.length())
        return 0;
    return a[pos]-'0';
}
string add(string a,string b)
{
    int i=a.length()-1;
    int j = b.length()-1;
    int carry =0;
    string sum="";
    while(i>=0 || j>=0)
    {
        int t = Int(a,i)+Int(b,j)+carry;
        sum += (t%10 + '0');
        carry = t/10;
        i--;
        j--;


    }
    if(carry)
     sum += (carry + '0');
     reverse(sum.begin(),sum.end());
     return sum;
}
bool Check_addtion(list<string>&res,string a,string b,string c)
{
    if(!is_valid(a) || !is_valid(b))
    {
        return false;
    }
    string sum = add(a,b);
    cout<<"a "<<a<<" b "<<b<<" c "<<c<<" sum "<<sum<<endl;
    if(sum==c)
    {
        res.push_back(sum);
        return true;
    }
    if(sum.size()>=c.size() || sum != c.substr(0,sum.size()))
    {
        return false;
    }
    else{
        res.push_back(sum);
        return Check_addtion(res,b,sum,c.substr(sum.size()));
    }
}
list<string> Push(string s)
{
    int l = s.length();
    list<string>res;
    for(int i=1;i<=l/2;i++)
    {
        for(int j=1;j<=(l-i)/2;j++)
        {
            if(Check_addtion(res,s.substr(0,i),s.substr(i,j),s.substr(i+j)))
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
void printResult(list<string> res)
{
    for (auto it = res.begin(); it != res.end(); it++)
        cout << *it << " ";
    cout << endl;
}
int main()
{
    string num = "235813";
    list<string> res = Push(num);
    printResult(res);

  return 0;
}

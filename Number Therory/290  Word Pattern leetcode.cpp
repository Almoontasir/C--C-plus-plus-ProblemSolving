#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
vector<string>split(string s)
{
    vector<string>words;
    string w="";
    for(int i=0;i<s.length();i++)
    {
        if( i == s.length()-1)
        {
            w +=s[i];
            words.push_back(w);
            break;
        }
        else if(s[i]==' ')
        {
            words.push_back(w);
            w="";
        }
        else
        {
            w +=s[i];
        }
    }
    return words;
}
 bool wordPattern(string pattern, string s) {
        vector<string>words = split(s);
        if(words.size()!=pattern.length())
            return false;
        map<char,string>charToword;
        map<string,char>wordTochar;
        for(int i=0;i<words.size();i++)
        {
            char c = pattern[i];
            string s1 = words[i];
            if(charToword.find(c)!=charToword.end() and charToword[c]!=s1)
                return false;
            if(wordTochar.find(s1)!=wordTochar.end()and wordTochar[s1]!=c)
                return false;
            charToword.insert({c,s1});
            wordTochar.insert({s1,c});
        }
        return true;
    }
int main()
{
// IO
string  s;
string pattern;
cin>>pattern;
getchar();
getline(cin,s);
//vector<string>v;

//cout<<s<<endl;
//cout<<pattern<<endl;
cout<<wordPattern(pattern, s);


return 0;
}

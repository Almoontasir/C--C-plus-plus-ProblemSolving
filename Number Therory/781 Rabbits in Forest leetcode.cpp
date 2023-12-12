#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'
int numRabbits(vector<int>& answers) {
        set<int>s;
        int counter=0;
        for(int i=0;i<answers.size();i++)
        {
            s.insert(answers[i]);
        }
        for(auto it=s.begin();it!=s.end();it++)
        {
            counter +=*it+1;
        }
        return counter;
    }
int main()
{
 IO
 int n;
 cin>>n;
 vector<int>answers(n);
 for(int i=0;i<n;i++)
    cin>>answers[i];
 cout<<numRabbits(answers);

return 0;
}

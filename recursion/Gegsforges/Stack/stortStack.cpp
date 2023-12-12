#include<bits/stdc++.h>
using namespace std;
void getSorted(stack<int>&st,int item)
{
    if(st.empty()||item>=st.top())
    {

        st.push(item);
        return;
    }

        int x =st.top();
        cout<<x<<endl;
        st.pop();
        getSorted(st,item);
        st.push(x);

}
void getElement(stack<int>&st)
{
    if(!st.empty())
    {

    int item = st.top();
    st.pop();
    getElement(st);
    getSorted(st,item);
    }
}
int main()
{
    stack<int>s1,s2;

    s1.push(30);
     s1.push(-5);
      s1.push(18);
      s1.push(14);
       s1.push(-3);
       s2=s1;
       cout<<"The original stack"<<endl;
       while(!s2.empty())
       {
           cout<<s2.top()<<" ";
           s2.pop();

       }
       cout<<endl;
       getElement(s1);
         cout<<"The sorted stack"<<endl;
       while(!s1.empty())
       {
           cout<<s1.top()<<" ";
           s1.pop();

       }

    return 0;
}

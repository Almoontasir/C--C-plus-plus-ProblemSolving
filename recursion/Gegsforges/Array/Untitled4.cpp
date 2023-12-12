#include<bits/stdc++.h>
using namespace std;
void pushElement(stack<int>&st,int item)
{
    if(st.empty())
        st.push(item);
    else
    {
        int x=st.top();
        st.pop();
        pushElement(st,item);
        st.push(x);


    }
}
void getElement(stack<int>&st)
{
    if(!st.empty())
    {
        int item = st.top();
        st.pop();
        getElement(st);
        pushElement(st,item);
//        cout<<item<<endl;
    }
}

int main()
{
    stack<int>s1,s2;
    for(int i=0;i<5;i++)
        s1.push(i);
     s2 = s1;
     cout<<"The original stack is"<<endl;
     while(!s2.empty())
     {
         cout<<s2.top()<<" ";
         s2.pop();
     }
     cout<<endl;
     getElement(s1);
     cout<<"The change stack is"<<endl;
      while(!s1.empty())
     {
         cout<<s1.top()<<" ";
         s1.pop();
     }

}

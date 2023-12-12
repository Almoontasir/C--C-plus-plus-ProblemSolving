#include<bits/stdc++.h>
using namespace std;
void fibo(queue<int>*pre,queue<int>*post,queue<int>*in,int n)
{
    if(n<3)
    {
        pre->push(n);
        in->push(n);
        post->push(n);
        return;
    }
    pre->push(n);
    fibo(pre,post,in,n-2);
    in->push(n);
    fibo(pre,post,in,n-1);
    post->push(n);

}
int main()
{
    queue<int> pre,in,post;
    int n;
    cin>>n;
    fibo(&pre,&post,&in,n);
    cout<<"pre order"<<endl;
    while(!pre.empty())
    {
        cout<<pre.front()<<" ";
        pre.pop();
    }
    cout<<endl;
    cout<<"In oredr"<<endl;
    while(!in.empty())
    {
        cout<<in.front()<<" ";
        in.pop();
    }
    cout<<endl;
    cout<<"post order"<<endl;
    while(!post.empty())
    {
        cout<<post.front()<<" ";
        post.pop();
    }



    return 0;

}


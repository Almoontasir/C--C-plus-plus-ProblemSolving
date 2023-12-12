#include<bits/stdc++.h>
using namespace std;
# define stackSize 7
typedef struct Stack{
    int data[stackSize+1];
    int top=0;
}Stack;
void push(Stack *s,int item)
{
    if(s->top==stackSize)
    {
        cout<<"The stack is full"<<endl;
        return;
    }
    s->data[s->top]=item;
    s->top = s->top+1;
}
int pop(Stack *s)
{
    if(s->top==0)
    {
        cout<<"The stack is empty"<<endl;
        return -1;
    }
    int item = s->data[s->top-1];
    s->top= s->top-1;
    return item;
}
void Reversre(Stack s)
{
    if(s.top>0)
    {

        int item = pop(&s);

         cout<<item<<endl;

        Reversre(s);
         cout<<item<<endl;

    }
}
int main()
{
    Stack s;
    for(int i=1;i<5;i++)
        push(&s,i);

     Reversre(s);


    return 0;
}

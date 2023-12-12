#include<bits/stdc++.h>
using namespace std;
#define size_queue 9
typedef struct
{
    int data [size_queue + 1];
    int head = 0;
    int tail = 0;
} Queue;
void enqueue(Queue *q, int item)
{
    if(((q->tail+1)%(size_queue+1))==q->head)
    {
        cout<<"The queue is full"<<endl;
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail+1)%(size_queue+1);
}

int dequeue(Queue *q)
{
    if(q->head == q->tail)
    {
        cout<<"The queue is empty"<<endl;
        return -1;
    }

    int item = q->data[q->head];
    q->head = (q->head+1)%(size_queue+1);
    return item;
}
int main()
{
    Queue q;

    cout<<"Enter data one by one"<<endl;
    for(int i=0; i<5 ;i++)
    {
        enqueue(&q,i);

    }
    cout<<endl;
    cout<<endl;    cout<<"The queue is "<<endl;
     for(int i=0; i<5 ;i++)
    {

        cout<<q.data[i]<<" ";

    }
    cout<<endl;    cout<<q.tail<<endl;

    cout<<endl;
    cout<<"Deleting data one by one"<<endl;
    for(int i=0;i<3;i++)
    {


        int n = dequeue(&q);

        cout<<"The pop item is "<<n<<endl;
    }
    cout<<endl;
    cout<<endl;
     cout<<"After deletion the queue is "<<endl;
     for(int i=q.head; i<q.tail ;i++)
    {

        cout<<q.data[i]<<" ";

    }
    return 0;
}

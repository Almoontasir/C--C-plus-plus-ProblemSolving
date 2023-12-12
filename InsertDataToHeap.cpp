#include<bits/stdc++.h>
using namespace std;
int parrent(int i)
{
    return i/2;
}
int left(int i)
{
    return i*2;
}
int right(int i)
{
    return i*2+1;
}
void heppifay(int heap[],int heap_size, int i)
{
    int l,r,largest,t;
    l = left(i);
    r = right(i);
    if(l<heap_size && heap[l]>heap[i])
    {
        largest = l;
    }
    else largest = i;

    if(r<heap_size && heap[r]>heap[largest])
        largest = r;
    if(largest != i)
    {
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest]= t;
        heppifay(heap,heap_size,largest);
    }

}



void Max_heap(int heap[],int heap_size)
{
    for(int i = heap_size/2; i>0; i--)
        heppifay(heap,heap_size,i);

}

int ExatractMax(int heap[],int heap_size)
{
    int Max = heap[1];
    heap[1] = heap[heap_size-1];
    heppifay(heap,heap_size-1,1);
    return Max;
}
int Insert(int heap[],int heap_size, int item)
{
    int p,t;
    heap_size +=1;
    heap[heap_size-1] = item;
    int i = heap_size -1;
    while(i>0 && heap[parrent(i)]>heap[i])
    {
        p = parrent(i);
        t = heap[p];
        heap[p] = heap[i];
        heap[i] = t;
        i = p;
    }
    return heap_size;
}
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
        cout<<endl;

    Max_heap(a,n);
    cout<<"After Max heap call"<<endl;
    for(int i=1; i<n; i++)
        cout<<a[i]<<" ";
        cout<<endl;
    cout<<"Enter the Item you want to insert"<<endl;
    int item;
    cin>>item;
    n = Insert(a,n,item);
    for(int i=1;i<n;i++)
            cout<<a[i]<<" ";

    return 0;
}




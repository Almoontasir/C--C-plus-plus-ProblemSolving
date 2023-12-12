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
int main()
{
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

    cout<<"The max value of the heap is "<<ExatractMax(a,n)<<endl;
    cout<<"After taking out the max value The heap is "<<endl;
    for(int i=1;i<n-1;i++)
        cout<<a[i]<<" ";
    cout<<endl;



    return 0;
}



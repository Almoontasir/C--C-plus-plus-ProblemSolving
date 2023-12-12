#include<bits/stdc++.h>
using namespace std;
int left_child(int i)
{
    return 2*i;
}
int right_child(int i)
{
    return 2*i+1;
}
int parrent(int i)
{
    return i/2;
}
int binarySearch(int a[],int l,int r,int item)
{
    if(l<=r)
    {
        int m = l + (r-l)/2;


        if(a[m]==item)
        {

            return m;

        }
        else if (a[m]>item)
           return binarySearch(a,l,m-1,item);
        else
           return binarySearch(a,m+1,r,item);
    }
    return -1;
}
int main()
{
    int n;
    int m;
    cin>>n;
    int a[n+1];
    for(int i=0;i<=n;i++)
        cin>>a[i];
   cout<<"Enter the item "<<endl;
        int item;
        cin>>item;

      if (binarySearch(a,1,n,item)==-1)
        cout<<"The item is not there"<<endl;
      else
      {
          m = binarySearch(a,1,n,item);
      }
      char s;
      cin>>s;
      cout<<left_child(m)<<endl;
      if(s=='p')
        cout<<a[parrent(m)]<<endl;
      else if(s=='l')
        cout<<a[left_child(m)]<<endl;
      else if(s=='r')
        cout<<a[right_child(m)]<<endl;



    return 0;
}

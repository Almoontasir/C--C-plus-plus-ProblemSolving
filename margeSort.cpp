#include<bits/stdc++.h>
using namespace std;
class newone {
public:
    int a[25];
    int n;

    int counter = 0;
    newone(int total)
    {
        n = total;

        //cout<<n<<endl;

    }
    void input()
    {
         cout<<"Enter all data one by one"<<endl;
        for(int i =0;i<n;i++)
            cin>>a[i];
    }
   void print()
   {


     for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
   }
void marge(int left,int mid,int right)
{

    int leftBegin = left;
    int leftEnd = mid;
    int rightBegin = mid + 1;
    int rightEnd = right;
    int n1 = leftEnd - leftBegin + 1;
    int n2 = rightEnd - rightBegin + 1;
    int L[n1+1],R[n2+1];
    for(int i =0;i<n1;i++)
        L[i] = a[leftBegin + i];
    for(int i =0;i<n2;i++)
        R[i] = a[rightBegin + i];
    int i = 0,j = 0, k = leftBegin;
    while(i<n1 && j<n2)
    { counter++;
        if(L[i]<=R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];


    }
    while(i<n1)
    {
        counter++;
        a[k++] = L[i++];
    }
    while(j<n2)
    {
        counter++;
        a[k++] = R[j++];

    }

}
void devide(int left,int right)
{
   if(left<right)
      {    cout<<left<<" "<<right<<endl;
           int mid = (right + left)/2;
           devide(left,mid);
           devide(mid+1,right);
           marge(left,mid,right);
      }


}
void sort()
{
    devide(0,n-1);
}
};


int main()
{
    freopen("in.txt","r",stdin);
    int n;
    cout<<"How many data "<<endl;
    cin>>n;
int     l = n;
   // cout<<n<<endl;
    int t =n;
    t = 4;
    //int a[n+1];
     newone m(n);


    m.input();
   // cout<<"Enter all data one by one"<<endl;
    //for(int i=0;i<n;i++)

        //cin>>a[i];
    cout<<"all data are before sorting"<<endl;
    m.print();
    cout<<endl;
     cout<<t<<endl;
     m.sort();
    //cout<<t<<endl;
     cout<<endl;
     cout<<"l = "<<l<<endl;
      cout<<"all data are after sorting"<<endl;
   m.print();
   cout<<endl;
   cout<<m.counter<<endl;


     return 0;
}

#include<bits/stdc++.h>
using namespace std;
void sorting (int a[],int n)
 {
     for(int step =1;step<n;step=step*2)
     {
         for(int l=0;l<n-1;l+=2*step)
         {
            int  mid = min(l+step-1,n-1);
            int r = min(l+2*step-1,n-1);
            int n1 = mid -l+1;
            int n2 = r -mid;
            int L[n1],R[n2];
            for(int i=0;i<n1;i++)
                L[i]=a[l+i];
            for(int i=0;i<n2;i++)
                R[i]=a[mid+1+i];
            int i=0,j=0,k=l;
            while(i<n1 && j<n2)
            {
                if(L[i]<=R[j])
                    a[k++]=L[i++];
                else
                    a[k++]=R[j++];
            }
            while(i<n1)
                a[k++]=L[i++];
            while(j<n2)
                a[k++]=R[j++];

         }
     }
 }
int main()

{

  string s;
  cin>>s;
  int n = s.length();
  int m = n/2+1;
  int a[m];

  for(int i=0,j=0;i<n;i+=2,j++)
    a[j]=s[i];
  sorting(a,m);
  for(int i=0;i<m-1;i++)
        cout<<a[i]-48<<"+";
        cout<<a[m-1]-48<<endl;
    return 0;
}

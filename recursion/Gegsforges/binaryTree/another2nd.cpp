#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,3,2,4,8,7,9};
    stack<int>st;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n)
    {
        cout<<st.top()<<" "<<arr[i]<<endl;
        if(!st.empty() && arr[i]>st.top())
        {

            int count1 =0;
            int t;
            while(st.top()<arr[i])
            {
                if(count1==0)
                {
                    t = st.top();
                    st.pop();
                }
                else
                {
                    st.pop();
                }
                count1++;
            }
            if(count1==2)
            {
                cout<<t<<endl;
            }
            st.push(arr[i]);
        }
        else
        {
            st.push(arr[i]);
        }
        i++;

    }
    return 0;
}

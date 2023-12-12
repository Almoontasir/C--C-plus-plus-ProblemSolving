#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    while(cin>>s1)
    {


        cin>>s2;
        int n1 = s1.length();
        int n2=  s2.length();
        vector<int>result(n1+n2,0);
        int k =0,l=0;
        for(int i=n1-1; i>=0; i--)
        {
            int carry =0;
            int value1=s1[i]-'0';
            l = k;
            for(int j=n2-1; j>=0; j--)
            {

                int value2 = s2[j]-'0';
                int sum = value1*value2 + result[l]+carry;
                carry = sum/10;
                result[l]=sum%10;

                l++;
            }
            if(carry)
                result[l]=carry;
            k++;
        }
        int i = n1+n2-1;
        while(i>=0 && !result[i])
            i--;
        if(i==-1)
            cout<<0<<endl;
        else
        {

            for(int j =i; j>=0; j--)
                cout<<result[j];
            cout<<endl;
        }

    }


    return 0;

}

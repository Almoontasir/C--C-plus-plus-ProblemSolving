#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>v,int element)
{
    int low = 0;
    int high = v.size()-1;

    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[mid] == element)
        {

            return v[mid];

        }
        if(v[mid]>element)
            high = mid-1;
        else
            low = mid + 1;
    }
    if(low>=v.size())
        return -1;
    return v[low];

}

int upper_bound(vector<int>v,int element)
{
    int low = 0;
    int high = v.size()-1;

    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[mid] == element)
        {
            if(v[mid]==v[v.size()-1])
                return -1;

            return v[mid+1];

        }
        if(v[mid]>element)
            high = mid-1;
        else
            low = mid + 1;
    }
    if(low>=v.size())
        return -1;
    return v[low];

}

int main()
{
    vector<int>v(5);
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>v[i];
//        v.push_back(n);
    }
    cout<<"for lower bound"<<endl;
    if(lower_bound(v,9)==-1)
        cout<<"Not found"<<endl;
    else
    cout<<lower_bound(v,9)<<endl;

    cout<<"for upper bound"<<endl;
     if(upper_bound(v,9)==-1)
        cout<<"Not found"<<endl;
    else
    cout<<upper_bound(v,9)<<endl;


    return 0;
}

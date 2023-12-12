#include<bits/stdc++.h>
using namespace std;
int main()
{
   	int n;
		cin>>n;
		vector<int> a;
		int p;
		cin>>p;
		a.push_back(p);
		for (int i=1;i<n;i++)
		{
			int q;
			cin>>q;
			if (q>=a.back())
				a.push_back(q);
			else
            {
				vector<int>::iterator it;
				it=upper_bound(a.begin(),a.end(),q);
				*it=q;
			}
		}
    return 0;
}


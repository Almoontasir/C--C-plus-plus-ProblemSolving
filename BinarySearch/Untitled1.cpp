#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

        int t;
        cin>>t;
        while(t--)
        {
            int n,q; cin>>n>>q;
	vector<int> arr(n+1);
	for (int i=1;i<=n;i++) cin>>arr[i];
	arr[0]=0;
	sort(arr.begin(),arr.end());
	vector<int> prefix(n+1);
	prefix[0]=0;
	for (int i=1;i<=n;i++) prefix[i]=prefix[i-1]+arr[i];
	while(q--){
		int k; cin>>k;
		int ind=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
		int definite=n+1-ind;
		int l=0,r=ind-1,more;
		while(l<=r){
			int mid=(l+r)/2;
			int req=k*mid-(prefix[ind-1]-prefix[ind-mid-1]);
			if (req<=ind-mid-1){
				more=mid;
				l=mid+1;
			}
			else r=mid-1;
		}
		cout<<definite+more<<endl;
	}




}



}

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define  ll long long
#define nline '\n'

int main()
{
 IO
class Solution{


	public:
	vector<long long> findMissing(long long A[], long long B[],
                 int N, int M)
	{
	    vector <long long > ans;
	    unordered_set <long long > st;

	    for(int i = 0; i <M; i++){
	        st.insert(B[i]);
	    }
	    for(int i = 0; i <N; i++){
	       if( st.find(A[i]) == st.end())
	       {
	           ans.push_back(A[i]);
	       }

	    }
	    return ans;
	}
};


return 0;
}

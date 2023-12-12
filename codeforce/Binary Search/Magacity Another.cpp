// working.cpp by Bill Weinman <http://bw.org/>
#include <bits/stdc++.h>
using namespace std;
int main() {
	 int n;long s;
	cin>>n>>s;
    long population=s;
	vector< vector< long > >location(n,vector<long>(2));
	for(int i=0;i<n;i++)
	{
	    long x,y;
		cin>>x>>y>>location[i][1];
		long  Rsquare=pow(x,2)+pow(y,2);
		location[i][0]=Rsquare;
		s+=location[i][1];
	}
	if(s<pow(10,6))
	{
		cout<<"-1"<<endl;
		return 0;
	}
	sort(location.begin(),location.end());
	for(int i=0;i<n;i++)
	{
		population+=location[i][1];
		if(population>=pow(10,6))
		{
			cout<<setprecision(8)<<sqrt((long double)location[i][0])<<endl;
			break;
		}
	}
		return 0;
}

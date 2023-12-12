#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	     int count=0, i=1;
	    while(n>0)
	    {
	        n-= i;
	        i++;
	        count++;
	    }
	    if(n==0)
	    cout<<count<<endl;
	    else
	    cout<<count-1<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>//jatin
using namespace std;
template<typename T>
istream& operator>>(istream &istream, vector<T> &v) {for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
#define nline "\n"
#define pb push_back
#define fo(i , a , b) for(int i = a; i < b ; i++)
#define ll long long int
const ll Mod=1000000007 ;
#define yes(x) if(x){cout<<"YES\n";}else{ cout<<"NO\n";}
/*_____________________________________________________________________________________________________________________________*/




void solve()
{
    ll n;
    cin>>n;ll q;cin>>q;
    vector<ll>v(n+1);
    fo(i,1,n+1)cin>>v[i];
    v[0]=0;
    sort(v.begin(), v.end());
    ll pre[n+1];
    ll sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=v[i];
        pre[i]=sum;
    }
    while(q--)
    {
        ll k;
        cin>>k;
        auto it=lower_bound(v.begin(), v.end(),k);
        ll ans=v.end()-it;
         cout<<ans<<nline;
        ll in=it-v.begin()-1;
         cout<<in<<nline;
        ll s=1,e=in;
        ll del=0;
        while(s<=e)
        {
            ll mid=s+(e-s)/2;
            ll o=pre[in]-pre[mid-1];
            // cout<<o<<nline;
            if(mid-1>=k*(in-mid+1)-o){del=in-mid+1;e=mid-1;}
            else s=mid+1;

        }

        cout<<ans+del<<nline;

    }




}

 int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
                                                  int t=1;
      cin>>t;

      while(t--)solve();}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IO ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
const ll N = 1e5 + 256, M = 10001, mod = 1e9 + 7, OO = 1e18;
vector<ll> a (N), P(N) ;
ll n , q , value;
bool valid(ll mid){
    ll x = lower_bound(a.begin() , a.end() , value) - a.begin();
    if(x == 0){return true;}
    x--;
    ll needed = mid - (n - 1 - x) ;
    if(needed <= 0){return true;}
    // to be                                             removed
    if( (needed * value) - (P[x] - P[x - needed]) <= (x + 1 - needed)){
        return true;
    }else{
        return false;
    }
}
void singleTestCase(int tc = 0) {
    cin >> n >> q ;
    a.resize(n,0);
    for (int i = 0; i < n; ++i) {cin >> a[i];}
    sort(a.begin(),a.end());
    for (int i = 1; i < n; ++i) {
        P[i] = P[i - 1] + a[i];
    }

    while (q--){
        cin >> value;
        ll ans = 0 ;
        ll l = 1 , r = n , mid ;
        while (l <= r){
            mid = (l + r) / 2 ;
            if(valid(mid)){
                ans = mid ;
                l = mid + 1 ;
            }else{
                r = mid - 1 ;
            }
        }
        cout << ans << '\n';
    }
}
signed main() {
    IO
    int tc = 1;
    cin >> tc ;
    for (int i = 1; i <= tc; ++i) {singleTestCase(i);}
    return 0;
}

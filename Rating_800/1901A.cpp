#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a); i<(b); i++)
#define rloop(i,a,b) for(int i=(a); i>=(b); i--)

const int MOD = 1e9 + 7;
const int INF = 1e8;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll modpow(ll a, ll b, ll mod=MOD) {
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n,x; cin >> n>>x;
    vector<int> a(n);
    loop(i,0,n) cin >> a[i];
    int ans=(x-a[n-1])*2;
    loop(i,0,n){
        if(i==0) ans=max(ans,a[0]);
        else ans=max(ans,a[i]-a[i-1]);
    }
    cout << ans << "\n";
}

int main(){
    fast_io;
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}
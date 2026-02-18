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
ll modinv(ll a, ll mod = MOD) {
return modpow(a, mod - 2, mod);
}

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    loop(i,0,n) cin >> a[i];
    vector<int> b,c;
    int maxi=*max_element(all(a));
    loop(i,0,n){
        if(a[i]==maxi || a[i]%maxi==0) c.push_back(a[i]);
        else b.push_back(a[i]);
        
    }
    if(b.size()==0) cout<<-1<<endl;
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i:b) cout<<i<<" ";
        cout<<endl;
        for(int i:c) cout<<i<<" ";
        cout<<endl;
    }
}

int main(){
    fast_io;
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define rloop(i, a, b) for (int i = (a); i >= (b); i--)

const int MOD = 1e9 + 7;
const int INF = 1e8;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll modpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (x.find(s) != string::npos)
    {
        cout << 0 << "\n";
        return;
    }

    string cur = x;
    for (int ops = 1; ops <= 5; ops++)
    {
        cur += cur; // double the string

        if (cur.find(s) != string::npos)
        {
            cout << ops << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
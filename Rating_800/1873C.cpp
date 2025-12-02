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
ll modinv(ll a, ll mod = MOD)
{
    return modpow(a, mod - 2, mod);
}

void solve()
{
    vector<vector<char>> grid(10, vector<char>(10));
    ll ans = 0;
    loop(i, 0, 10)
    {
        loop(j, 0, 10)
        {
            cin >> grid[i][j];

            if (grid[i][j] == 'X')
            {
                if (i == 0 || i == 9 || j == 0 || j == 9)
                    ans++;
                else if (i == 1 || i == 8 || j == 1 || j == 8)
                    ans += 2;
                else if (i == 2 || i == 7 || j == 2 || j == 7)
                    ans += 3;
                else if (i == 3 || i == 6 || j == 3 || j == 6)
                    ans += 4;
                else
                    ans += 5;
            }
        }
    }

    cout << ans << endl;
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
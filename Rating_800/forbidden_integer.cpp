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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        while (n > 0)
        {
            cout << 1 << " ";
            n--;
        }
        cout << endl;
    }
    else
    {
        if (k == 1)
            cout << "NO" << endl;
        else if ((n % 2 == 0 && k >= 2) || (n % 2 == 1 && k >= 3))
        {
            cout << "YES" << endl;
           
            if ((n % 2 == 0 && k >= 2))
            {
                 cout<<n/2<<endl;
                while (n > 0)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << endl;
            }
            else
            {
                cout<<(n-3)/2+1<<endl;
                cout << 3 << " ";
                n -= 3;

                while (n > 0)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
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
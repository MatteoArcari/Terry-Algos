#define MOD 1000000007
#define INF LLONG_MAX
typedef long long ll;

// Non modificare le cose sopra

ll modExp (ll b, ll e, ll mod = MOD) {
    // esponenziazione veloce,
    // restituisce (a^b)%mod
    if (e == 0) return 1ll;
    if (e & 1) return (b * modExp(b, e - 1, mod))%mod;
    ll res = modExp(b, e / 2ll, mod);
    return (res * res) % mod;
}

ll modAdd(ll a, ll b, ll mod = MOD) {
    // somma a e b modulo mod
    return ((a % mod) + (b % mod)) % mod;
}

ll modSub(ll a, ll b, ll mod = MOD) {
    // sottrae b ad a modulo mod
    return (a + mod - b) % mod;
}

ll modMul(ll a, ll b, ll mod = MOD) {
    // moltiplica a e b modulo mod
    return ((a % mod) * (b % mod)) % mod;
}

ll modDiv(ll a, ll b, ll mod = MOD) {
    // divide a per b modulo mod
    return ((a % mod) * modExp(b, mod-2, mod)) % mod;
}
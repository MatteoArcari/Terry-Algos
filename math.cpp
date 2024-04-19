#include <vector>
#define MOD 1000000007
#define INF LLONG_MAX
using namespace std;
typedef long long ll;

// Non modificare le cose sopra

ll gcd(ll a, ll b) {
    // Restituisce il massimo comune divisore tra due interi
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    // Restitusce il minimo comune multiplo
    return a / gcd(a, b) * b;
}

ll exp (ll b, ll e, ll mod = MOD) {
    // esponenziazione veloce,
    // restituisce (a^b)%mod
    if (e == 0) return 1ll;
    if (e & 1) return (b * exp(b, e - 1, mod))%mod;
    ll res = exp(b, e / 2ll, mod);
    return (res * res) % mod;
}

void sieve(int n, vector<bool> &p) {

    /*
    Riceve un vector<bool> e la dimensione. 
    Dopo questa funzione p[i] vale true se i è primo; false altrimenti
    */

    p.assign(n + 10, 1);
    p[0] = p[1] = 0;

    for (int i = 2; i <= n; i++) {
        if (!p[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            p[j] = 0;
        }
    }
}

bool isPrime (int n) {
    // restituisce true se n è primo; flase altrimenti
    for (int i = 2; i * i <= n; i++) {
        if (n % i) return 0;
    }
    return 1;
}

int primeDivisors (int n, vector<int> &d) {
    // prede un vector<int> e lo riempie con i divisori primi di n;
    // restituisce il numero di divisolri primi
    d.clear();
    int i = 2;
    if (n % (i++) == 0) {
        while (n % 2 == 0) n /= 2;
        d.push_back(2);
    }
    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            d.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 2) d.push_back(n);
    return d.size();
}
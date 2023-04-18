#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

#define INF LLONG_MAX
#define endl '\n'
#define int ll

// Non modificare le cose sopra

int modExp (int b,int e,int mod=MOD) {
    // esponenziazione veloce,
    // restituisce (a^b)%mod
    if (!e) return 1;
    int res=modExp(b,e/2);
    res=(res*res)%mod;
    if (res&1) res=(res*b)%mod;
    return res;
}

int modAdd(int a,int b,int mod=MOD) {
    // somma a e b modulo mod
    return ((a%mod)+(b%mod)) % mod;
}

int modSub(int a,int b,int mod=MOD) {
    // sottrae b ad a modulo mod
    return (a+mod-b)%mod;
}

int modMul(int a,int b,int mod=MOD) {
    // moltiplica a e b modulo mod
    return ((a%mod)*(b%mod))%mod;
}

int modDiv(int a,int b,int mod=MOD) {
    // divide a per b modulo mod
    return ((a%mod)*modExp(b,mod-2,mod))%mod;
}

signed main() {

    return 0;
}
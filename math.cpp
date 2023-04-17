#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF LLONG_MAX
#define endl '\n'
#define int ll

// Non modificare le cose sopra

int gcd (int a,int b) {
    // Restituisce il massimo comune divisore tra due interi
    if (b==0) return a;
    return gcd(b,a%b);
}

int lcm (int a,int b) {
    // Restitusce il minimo comune multiplo
    return a/gcd(a,b)*b;
}

void crivello (int n,vector<bool> &p) {
    /*
    Riceve un vector<bool> e la dimensione. 
    Dopo questa funzione p[i] vale true se i è primo; false altrimenti
    */
    p.resize(n+10);
    p.assign(n+10,1);
    p[0]=p[1]=0;
    for (int i=2;i<=n;i++) {
        if (!p[i]) continue;
        for (int j=i*i;j<=n;j+=i) p[j]=0;
    }
}

bool primo (int n) {
    // restituisce true se n è primo; flase altrimenti
    for (int i=2;i*i<=n;i++) if (n%i) return 0;
    return 1;
}

vector<int> divisoriPrimi (int n) {
    // restituisce un vector<int> con i divisori primi di n
    vector<int> res;
    for (int i=2;i*i<=n;i++) {
        if (i%n==0) {
            res.push_back(i);
            while (i%n==0) n/=i;
        }
    }
    if (n==2) res.push_back(2);
    return res;
}

signed main() {
    

    return 0;
}
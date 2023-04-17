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

int divisoriPrimi (int n,vector<int> &d) {
    // prede un vector<int> e lo riempie con i divisori primi di n;
    // restituisce il numero di divisolri primi
    d.clear();
    int i=2;
    if (n%(i++)==0) {
        while (!(n&1)) n/=2;
        d.push_back(2);
    }
    for (i=3;i*i<=n;i+=2) {
        if (n%i==0) {
            d.push_back(i);
            while (n%i==0) n/=i;
        }
    }
    if (n>2) d.push_back(n);
    return d.size();
}

signed main() {

    // Esempio per divisoriPrimi
    int n=60;
    vector<int> d;
    cout << divisoriPrimi(n,d) << endl;
    for (auto x:d) cout << x << " ";
    cout << endl;

    return 0;
}
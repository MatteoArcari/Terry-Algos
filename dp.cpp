#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF INT_MAX
#define endl '\n'

// Non modificare le cose sopra

int main() {

    { // longest increasing subsequence
        int n; cin >> n;
        vector<int> a(n), lis(n);

        int LIS = 1; // risposta

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            lis[i] = 1;
            for (int j = 0; j < i; j++) {
                if (a[j] < a[i] && lis[j] + 1 > lis[i]) {
                    lis[i] = lis[j] + 1;
                }
            }
            if (lis[i] > LIS) {
                LIS = lis[i];
            }
        }

        cout << LIS << endl;

    }

    { // knapsack
        int n, w;
        cin >> n >> w;

        vector<int> p(n+1); // peso
        vector<int> v(n+1); // valore

        vector<vector<int>> dp(n+1, vector<int> (w+1, 0)); 
        

        for (int i = 1; i <= n; i++) cin >> p[i];
        for (int i = 1; i <= n; i++) cin >> v[i];

        // massimo valore che posso avere con i primi i oggetti e capacità j

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= w; j++) {
                dp[i][j] = dp[i-1][j];
                if (p[i] <= j) { // se posso prenderlo
                    dp[i][j] = max(dp[i][j], dp[i-1][j-p[i]] + v[i]);
                }
            }
        }

        cout << dp[n][w] << endl;

    }
    

    return 0;
}
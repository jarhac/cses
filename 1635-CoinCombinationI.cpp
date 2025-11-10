#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c, n;
    cin >> c >> n;
    vector<int> coins(c, 0);
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < c; i++) {
        cin >> coins[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < c; j++) {
            if(i - coins[j] < 0) continue;
            dp[i] += dp[i-coins[j]];
            if(dp[i] >= MOD) dp[i] -= MOD;
        }
    }
    cout << dp[n] << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> coins(n, 0), dp(m + 1, 0);
    // dp[0] = 1000001;
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    for(int i = 1; i <= m; i++) {
        int m = 1000001;
        for(int j = 0; j < n; j++) {
            if(i - coins[j] < 0) continue;
            m = min(m, dp[i - coins[j]] + 1);
        }
        dp[i] = m;
    }
    if(dp[m] == 1000001) {cout << -1; return 0;}
    cout << dp[m] << endl;
}

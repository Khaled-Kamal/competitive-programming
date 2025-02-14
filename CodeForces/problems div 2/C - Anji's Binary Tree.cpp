// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif
#define int long long

void magic() {
    int n;
    string s;
    cin >> n >> s;
    vector<array<int, 2>> G(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> G[i][j];
            G[i][j]--;
        }
    }
    vector<int> dp(n);
    int ans = 1e9;
    auto dfs = [&] (auto&& self, int v) -> void {
        if (G[v][0] != -1) {
            dp[G[v][0]] = dp[v] + (s[v] != 'L');
            self(self, G[v][0]);
        }
        if (G[v][1] != -1) {
            dp[G[v][1]] = dp[v] + (s[v] != 'R');
            self(self, G[v][1]);
        }
        if (G[v][0] == -1 && G[v][1] == -1) {
            ans = min(ans, dp[v]);
        }
    };
    dfs(dfs, 0);
    cout << ans << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

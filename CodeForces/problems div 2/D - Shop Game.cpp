#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i].second;
    for (int i = 0; i < n; ++i) cin >> a[i].first;
    std::sort(a.rbegin(), a.rend());
    priority_queue<int> s;
    int sum{}, neg{}, ans{};
    for (auto &i: a) sum += max(0LL, i.first - i.second);
    for (int i = 0; i < n; ++i) {
        if (s.size() == k) ans = max(ans, sum - neg);
        sum -= max(0LL, a[i].first - a[i].second);
        neg += a[i].second, s.push(a[i].second);
        if (s.size() > k) neg -= s.top(), s.pop();
    }
    if (s.size() == k) ans = max(ans, sum - neg);
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
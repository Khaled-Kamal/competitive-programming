#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];
    int c{};
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < n-2; ++j)
            c += s[i].substr(j, 3) == "..." && s[!i].substr(j, 3) == "x.x";
    cout << c << '\n';
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
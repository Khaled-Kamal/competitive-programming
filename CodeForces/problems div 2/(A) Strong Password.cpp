#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            cout << (char)(s[i] + (s[i] == 'z' ? -1 : 1)) << s.substr(i) << '\n';
            return;
        } else cout << s[i];
    }
    cout << (char)('a' + (s.back() == 'a')) << '\n';
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
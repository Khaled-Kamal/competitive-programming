#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == '#') {
                v.push_back(j + 1);
                break;
            }
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}

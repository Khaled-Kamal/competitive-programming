#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0, c = 0; i < n; ++i) {
        if (i & 1) c += (s[i] == '(') - (s[i] == ')');
        else {
            if (c - 1 - (s[i+1] == ')') >= 0) s[i] = ')', c--;
            else s[i] = '(', c++;
        }
    }
    stack<int> st;
    int ans{};
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') st.push(i);
        else ans += i - st.top(), st.pop();
    }
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
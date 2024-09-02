#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxi_index = 0, mini_index = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > a[maxi_index]) maxi_index = i;
        if (a[i] < a[mini_index]) mini_index = i;
    }

    swap(a[maxi_index], a[mini_index]);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }

    return 0;
}

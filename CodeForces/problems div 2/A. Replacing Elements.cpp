#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        cout << (a[n - 1] <= k || a[0] + a[1] <= k ? "YES" : "NO") << '\n';
    }
}

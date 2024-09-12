#include <bits/stdc++.h>
using namespace std;


void solve(){
    int64_t n;
    cin >> n;
    vector<int> bits;


    for (int i = 0; i < 62; i++) {
        if (n & (int64_t(1) << i)) {
            bits.push_back(i);
        }
    }

    int k = int(bits.size());


    if (k == 1) {
        cout << 1 << '\n';
        cout << n << '\n';
    } else {

        cout << k + 1 << '\n';
        for (int i = k - 1; i >= 0; i--) {
            cout << n - (int64_t(1) << bits[i]) << " ";
        }
        cout << n << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

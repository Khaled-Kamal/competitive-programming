

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif
#define int long long

void magic() {

    int n; cin >> n;
    vector<int> a(n);
    multiset<int> b;
    set<int> c;
    c.insert(n);
    int c0{}, first = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i]) b.insert(a[i]);
        else if (!~first) first = i;
        c.insert(i), c0 += !a[i];
    }
    int best = n - c0;
    if (c0 == n || !~first) {
        cout << max(best, 1ll) << '\n';
        return;
    }
    for (int i = n - 1; ~i; --i) {
        if (!a[i]) {
            if (i == first) c.erase(0);
            if (*b.begin() < *c.begin()) {
                cout << best << '\n';
                return;
            }
            continue;
        }
        b.erase(b.find(a[i]));
        if (b.empty()) break;
        c.erase(a[i]);
        if (*b.begin() < *c.begin()) {
            cout << best << '\n';
            return;
        }
    }
    cout << best + 1 << '\n';

}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

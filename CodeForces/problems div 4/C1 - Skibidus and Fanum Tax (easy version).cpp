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

    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    vector<long long> b(m);
    for (auto &x : b)
        cin >> x;

    long long b1 = b[0];

    bool p = true;
    long long prev = LLONG_MIN;

    for (int i = 0; i < n; ++i) {
        long long ai = a[i];
        vector<long long> vec = {ai, b1 - ai};
        sort(vec.begin(), vec.end());

        bool f = false;
        for (auto o : vec) {
            if (o >= prev) {
                prev = o;
                f = true;
                break;
            }
        }

        if (!f) {
            p = false;
            break;
        }
    }

    cout << (p ? "YES\n" : "NO\n");
}
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tt = 1; cin >> tt;
    while (tt--) magic();
}

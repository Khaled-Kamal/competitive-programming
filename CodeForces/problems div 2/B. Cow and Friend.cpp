
// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif

void magic() {
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    bool can = false;
    long long mx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == k) can = true;
        mx = max(mx, a[i]);
    }
    cout << (can ? 1 :  max(2LL, (k + mx - 1) / mx) ) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;  cin >> t;
    while (t--) magic();
}

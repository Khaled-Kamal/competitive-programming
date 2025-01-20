// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif
#define int long long

void magic() {

    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        freq[x[i]]++;
    }
    int mx = 0;
    for (auto &[a, count_a] : freq) {
        int b = k - a;
        if (freq.count(b)) {
            int pairs = min(count_a, freq[b]);
            if (a == b) pairs /= 2;
            mx += pairs;
            freq[a] -= pairs;
            freq[b] -= pairs;
        }
    }
    cout << mx << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

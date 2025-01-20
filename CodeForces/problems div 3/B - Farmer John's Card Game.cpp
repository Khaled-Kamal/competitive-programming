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

    int n, m;
    std::cin >> n >> m;

    bool ok = true;
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < m; j++) {
            int a;
            std::cin >> a;
            if (j == 0) {
                x = a % n;
            }
            if (a % n != x) {
                ok = false;
            }
        }
        p[x] = i;
    }
    if (ok) {
        for (int i = 0; i < n; i++) {
            std::cout << p[i] + 1 << " \n"[i == n - 1];
        }
    } else {
        std::cout << -1 << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

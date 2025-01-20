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

    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            std::cout << "NO\n";
            return;
        }
        a[i] -= a[i - 1];
    }
    std::cout << "YES\n";
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

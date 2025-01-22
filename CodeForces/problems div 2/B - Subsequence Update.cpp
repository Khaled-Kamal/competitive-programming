
#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif

#define int long long

void magic() {
    int n, l, r;
    cin >> n >> l >> r;

    deque<int> a(n);
    for (int &x : a) cin >> x;

    int d = r - l + 1;

    deque<int> p(a.begin(), a.begin() + r);
    sort(p.begin(), p.end());
    
    int ans = accumulate(p.begin(), p.begin() + d, 0LL);
    deque<int> s(a.begin() + l - 1, a.end());
    sort(s.begin(), s.end());
    
    int sum = accumulate(s.begin(), s.begin() + d, 0LL);
    int mx = min(ans, sum);
    cout << mx << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        magic();
    }
}

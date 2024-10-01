#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    i64 b, c, d;
    std::cin >> b >> c >> d;
    
    i64 ans = 0;
    for (int i = 0; i < 60; i++) {
        bool ok = false;
        for (int a = 0; a < 2; a++) {
            i64 v = ((a | b) & 1) - (a & c & 1);
            if ((v & 1) == (d & 1)) {
                d -= v;
                b >>= 1;
                c >>= 1;
                d >>= 1;
                ok = true;
                ans |= a * (1LL << i);
                break;
            }
        }
        if (!ok) {
            ans = -1;
            break;
        }
    }
    if (d != 0) {
        ans = -1;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

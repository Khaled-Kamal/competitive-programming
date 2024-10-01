#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int k;
    cin >> k;
    int low = 0;
    int high = int64_t(2e18);
    while (low + 1 < high) {
        auto mid = (low + high) >> 1;
        int x = int64_t(sqrt((long double) mid) + 10);
        while (x * x > mid) {
            x -= 1;
        }
        if (mid - x >= k) {
            high = mid;
        } else {
            low = mid;
        }
    }
    cout << high << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

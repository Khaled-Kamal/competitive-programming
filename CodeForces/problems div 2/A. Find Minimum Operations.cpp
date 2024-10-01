#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << n << '\n';
            continue;
        }
        int ans = 0;
        while (n > 0) {
            ans += n % k;
            n /= k;
        }
        cout << ans << '\n';
    }
}

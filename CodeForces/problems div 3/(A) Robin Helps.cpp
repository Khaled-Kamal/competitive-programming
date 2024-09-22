#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define PII pair<int, int>
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, m, a[N];
void solve()
{
    cin >> n >> m;
    int cnt = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= m)
            cnt += a[i];
        if (a[i] == 0 && cnt)
            ans++, cnt--;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

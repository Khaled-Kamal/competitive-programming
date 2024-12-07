#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;

void solve() {

    int n, s[2]{};
    cin >> n;
    for (int i = 0, x; i < n; ++i)
        cin >> x, s[i & 1] += x;
    cout << ((s[0] % ((n + 1) / 2)) || (s[1] % (n / 2)) || s[0] / ((n + 1) / 2) != s[1] / (n / 2) ? "NO\n" : "YES\n");
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;  cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    //    cout << '\n';
    }
    return (0 - 0);

}

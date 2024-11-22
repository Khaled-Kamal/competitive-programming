
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) cin >> i;
    vector<int> b(n);
    set<int> s;
    set<pair<int, int>> t;
    for (int i = 1; i <= n; ++i) s.insert(i);
    for (int i = 1; i < n - 1; i += 2) {
        if (a[i] == 1) ++i;
        b[i] = n - a[i] + 2;
        s.erase(b[i]);
        t.emplace(-a[i - 1], i - 1);
        t.emplace(-a[i + 1], i + 1);
    }
    for (auto &[i, j]: t) {
        auto it = s.upper_bound(n + i + 1);
        b[j] = *--it, s.erase(it);
    }
    for (auto &i: b) {
        if (!i) i = *s.begin();
        cout << i << ' ';
    }
    cout << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
   cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }
    return (0 - 0);

}

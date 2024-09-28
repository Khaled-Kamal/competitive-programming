#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];
    }
    int ans = 0 ;
    for (int i = 0; i <2 ; ++i) {
      int mx = 0 , cnt = 0;
        for (int j = i; j <n ; j+=2) {
            mx = max(mx,v[j]);
            cnt++;
        }
        ans = max(ans , cnt + mx);
    }
    cout << ans << '\n';
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

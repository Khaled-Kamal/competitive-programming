#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n ;
    cin >> n ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    int mini = v[0];
    int ans  = 1;

    for (int i = 1; i <=n ; ++i) {
        if(v[i] < mini)
        {
            mini = v[i];
            ans = i + 1;
        }

    }

    cout << mini << ' ' << ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
   //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
        cout << '\n';
    }

    return 0;
}

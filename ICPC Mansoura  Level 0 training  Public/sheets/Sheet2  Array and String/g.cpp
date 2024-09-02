#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n;
    cin >> n;
    vector<vector<int>> v(n , vector<int>(n));
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            cin >> v[i][j];
        }
    }
    int ans = 0  , res = 0;
    for(int i = 0 ; i < n ; i++)
    {
        ans+=v[i][i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        res+=v[i][n - i - 1];
    }

    cout << abs(ans - res) ;

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

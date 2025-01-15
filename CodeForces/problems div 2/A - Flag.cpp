#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {

     int n , m ;
     cin >> n >> m ;
     vector<string> a(n) ;
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }
    bool can = true;
    for (int i = 0; i < n ; ++i) {
        set<char> grid(a[i].begin() , a[i].end());
        if(grid.size()!=1)
        {
            can = false;
            break;
        }
        if(i > 0 && a[i][0] == a[i - 1][0])
        {
            can = false;
            break;
        }
    }
    cout << (can ? "YES" : "NO");
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; //cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
       if (i < tc) cout << '\n';
    }
    return 0;
}

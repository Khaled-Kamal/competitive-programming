#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n , m ;
    cin >> n >> m ;
    vector<vector<int>> v(n , vector<int>(m));
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin >> v[i][j];
        }
    }

    int x ;
    cin >> x ;
    bool f = false;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
           if(x == v[i][j])
           {
               f = true;
               break;
           }
        }
        if(f)
            break;
    }

    cout << (f ? "YES" : "NO") ;

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

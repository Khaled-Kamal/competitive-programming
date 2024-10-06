
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {


    int x , y ;
    cin >> x >> y ;

    cout << (y == x + 1 || (x == 1 && y == 10) ? "YES" : "NO") ;


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}

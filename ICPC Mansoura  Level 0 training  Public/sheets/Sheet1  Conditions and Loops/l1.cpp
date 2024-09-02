#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

     int n ;
     cin >> n ;
     cout << n * (n + 1 ) / 2 ;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
   // cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
        cout << '\n';
    }

    return 0;
}

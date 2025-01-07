#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

   int a , b , n ;
   cin >> a >> b >> n;
   if(n % 3 == 0) cout << a ;
   else if(n % 3 == 1) cout << b ;
   else cout << (a ^ b);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
        if (i < tc) cout << '\n';
    }
    return 0;
}

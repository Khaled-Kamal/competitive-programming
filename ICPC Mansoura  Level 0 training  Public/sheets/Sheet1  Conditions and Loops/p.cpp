#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

     long double a , b , c ;
     cin >> a >> b >> c ;

    long double ans =( (a * 2) + (b * 3) + (c * 5)) / 10.0 ;

    cout << fixed << setprecision(1) << "MEDIA = " << ans ;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
  //  cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
        cout << '\n';
    }

    return 0;
}

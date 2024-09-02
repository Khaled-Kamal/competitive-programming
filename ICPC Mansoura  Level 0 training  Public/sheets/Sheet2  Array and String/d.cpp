#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n ;
    cin >> n ;
    int a[n];
    for (int i = 0; i <n ; ++i) {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i <n ; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
    reverse(a,a+n);
    for (int i = 0; i <n ; ++i) {
        cout << a[i] << ' ';
    }

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

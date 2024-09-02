#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    char c ;
    cin >> c ;

    int n ;
    cin >> n ;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i <n ; ++i) {
        int x = v[i];
        for (int j = 0; j <x ; ++j) {
            cout << c ;
        }
        cout << endl;
    }
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

#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {


    vector<int> v(3);
    for (int i = 0; i < 3 ; ++i) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < 3 ; ++i) {
        cout << v[i] << ' ' ;

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
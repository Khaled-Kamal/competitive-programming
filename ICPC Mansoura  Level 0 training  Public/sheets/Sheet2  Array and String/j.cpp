#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n  ;
    cin >> n  ;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];
    }

    bool f = true;
    for (int i = 0; i <=n/2 ; ++i) {
        if(v[i]!=v[n - i - 1])
        {
            f = false;
            break;
        }
    }

    cout <<(f?"YES" : "NO");

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
   //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();

    }

    return 0;
}

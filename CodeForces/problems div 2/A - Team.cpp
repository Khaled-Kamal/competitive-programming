#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n ;
    cin >> n ;
    int sum = 0  , cnt = 0;
    for (int i = 0; i <n ; ++i) {
        int a , b , c ;
        cin >> a >> b >> c ;
        sum = a +b + c ;
        if(sum >= 2)
        {
            cnt++;
        }
    }
    cout << cnt ;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
   // cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();

    }

    return 0;
}

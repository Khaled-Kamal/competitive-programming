#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

  int n ;
  cin >> n ;
  vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];

        if(v[i] <= 10)
        {
            cout << "A[" << i << "]" << " = " << v[i] << '\n';
        }
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

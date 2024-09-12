#include <bits/stdc++.h>
using namespace std;
#define int long long
void KKB()
{
    int n, x, y;
    cin >> n >> x >> y;
    --x; --y;
    vector<int> a(n);
    for (int i = y; i <= x; i++) {
        a[i] = 1;
    }
    for (int i = x + 1; i < n; i++) {
        a[i] = (i % 2 == (x + 1) % 2 ? -1 : 1);
    }
    for (int i = y - 1; i >= 0; i--) {
        a[i] = (i % 2 == (y - 1) % 2 ? -1 : 1);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
}
signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      int t = 1 ;
      cin >> t ;
      while(t--)
      {
          KKB();

      }
}
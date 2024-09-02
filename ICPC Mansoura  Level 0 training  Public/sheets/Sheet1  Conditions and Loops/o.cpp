#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {


      int a , b , c ;
      cin >> a >> b >> c ;

      if(a + b == c)
      {
          cout << "YES" ;
      }
      else if(b + c == a)
      {
          cout << "YES";
      }
      else if(a + c == b)
      {
          cout << "YES";
      }
      else
      {
          cout << "NO";
      }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
        cout << '\n';
    }

    return 0;
}
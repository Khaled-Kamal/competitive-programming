#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x , y ;
    cin >> x >> y ;

   cout << (x - 1 + y - 2) / (y - 1) << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      int t = 1 ;
      cin >> t ;
      while(t--)
      {
          solve();
      }
    return 0;
}

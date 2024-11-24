#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

int range(int n)
{
    return n * (n + 1) / 2 ;
}
void solve() {

      int l , r ;
      cin >> l >> r ;

      if(l > r)
      {
          swap(l , r);
      }
      cout << range(r) - range(l - 1) << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
    cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }
    return (0 - 0);

}
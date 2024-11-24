#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

      int n , k ;
      cin >> n >> k ;
      vector<int> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n ; i+=k) {
        int ans = a[i];
        for (int j = i; j < i + k && j < n ; ++j) {
            ans = min(ans , a[j]);
        }
        cout << ans << ' ' ;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
  //  cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }
    return (0 - 0);

}
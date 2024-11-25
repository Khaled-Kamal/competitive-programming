#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

      int n ;
      cin >> n ;
      int ev = 0 , od = 0 ;
      vector<int> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
        if(a[i] & 1)
        {
            od++;
        }
    }

    ev = n - od;

    if(abs(ev - od) & 1)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << abs(ev - od) / 2 << '\n';
    }
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
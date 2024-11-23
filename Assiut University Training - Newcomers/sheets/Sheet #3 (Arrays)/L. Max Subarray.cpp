#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve(){

     int n ;
     cin >> n ;
     int a[n];
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n ; ++i) {
       int ans = a[i] ;
        for (int j = i; j < n ; ++j) {
            ans = max(ans , a[j]);
            cout << ans << ' ' ;
        }
    }

    cout << endl ;
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

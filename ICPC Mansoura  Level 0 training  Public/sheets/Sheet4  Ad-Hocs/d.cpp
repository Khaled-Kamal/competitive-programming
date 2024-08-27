#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {

    int n ;
    cin >> n ;
    int a[100005];
    for (int i = 0; i <n ; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <=n ; ++i) {
        a[i] +=a[i - 1];
    }
    int q ;
    cin >> q ;
    while(q--)
    {
        int l , r ;
        cin >> l >> r ;
        l-- , r--;
        if(l == 0)
        {
            cout << a[r] << '\n';
        }
        else
        {
            cout << a[r] - a[l- 1] << '\n';
        }
    }

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
    // cin >> tc ;
    for (int i = 1; i <=tc ; ++i) {
        solve();

    }

    return 1 - 1 ;

}
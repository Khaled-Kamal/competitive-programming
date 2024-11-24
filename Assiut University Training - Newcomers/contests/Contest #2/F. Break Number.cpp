#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double


void solve() {

    int n ;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

    int mx = 0 ;

    for (int i = 0; i < n ; ++i) {
        int cnt = 0 ;

        while(a[i] %  2 == 0 )
        {
            a[i]/=2;
            cnt++;
        }
        mx = max(mx , cnt);
    }

    cout << mx << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
 //   cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }
    return (0 - 0);

}
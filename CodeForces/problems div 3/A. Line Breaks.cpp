#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;

void solve() {

     int n , m ;
     cin >> n >> m ;
     vector<string> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

    int sz = 0 , cnt = 0 ;
    for (int i = 0; i < n ; ++i) {
        sz+=a[i].size();
        if(sz <= m)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt ;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ; cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
        cout << '\n';
    }
    return (0 - 0);

}

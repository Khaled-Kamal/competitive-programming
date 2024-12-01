#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

      char grid[8][8];
    for (int i = 0; i < 8 ; ++i) {
        for (int j = 0; j < 8 ; ++j) {
            cin >> grid[i][j];
        }
    }

    string ans = "";
    for (int i = 0; i < 8 ; ++i) {
        for (int j = 0; j < 8 ; ++j) {
            if(grid[i][j]!='.'){
                ans+=grid[i][j];
            }
        }
    }

    cout << ans ;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
        cout << '\n';
    }
    return (0 - 0);

}

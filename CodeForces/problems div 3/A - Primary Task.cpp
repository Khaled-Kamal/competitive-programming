#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {

    string s;
    cin >> s;
    if (s.size() >= 3 && s.substr(0, 2) == "10" && s[2] != '0' && stoi(s.substr(2)) >= 2) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
     cin >> tc ;
    for (int i = 1; i <=tc ; ++i) {
        solve();

    }

    return 1 - 1 ;
  
}

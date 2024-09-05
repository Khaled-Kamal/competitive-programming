#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n ;
    string s ;
    cin >> n >> s ;
    int cnt = 0 ;
    for (int i = 0; i <s.size() ; ++i) {
        if(s[i] == '0')
        {
            cnt++;
        }
    }

    cout << (cnt>=1 ? "YES" : "NO") << '\n';
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

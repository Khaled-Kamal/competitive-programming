#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

      string s ; cin >> s;
      int sz = s.size();
      int cnt = 0 , mx = 0 ;
      for(char &c : s)
      {
           if(c == '(')cnt++;
           else
           {
               if(cnt > 0)
               {
                   cnt--;
                   mx+=2;
               }
           }
      }

      cout << (mx == sz ? "Yes" : "No") ;

 }

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; //cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
        if (i < tc) cout << '\n';
    }
    return 0;
}

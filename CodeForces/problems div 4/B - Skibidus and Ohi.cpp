// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif

#define int long long

void magic() {

    string s; cin >> s;
    int sz = s.size();
    bool can = false;
    for (int i = 0; i < s.size() ; ++i) {
      int j = i + 1 ;
      if(j < s.size() && s[i] == s[j])
      {
          can = true;
          break;
      }
    }
    if(can) sz = 1 ;
    cout << sz << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tt = 1; cin >> tt;
    while (tt--) magic();
}

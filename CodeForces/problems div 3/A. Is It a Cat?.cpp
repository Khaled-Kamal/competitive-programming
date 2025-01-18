// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif
#define int long long
//==================+//
void magic() {

   int n ; cin >> n ;
   string s ; cin >> s ;

   int j = 0 ;
    for (int i = 0; i < 4 ; ++i) {
      char lo = "meow"[i];
      char up = "MEOW"[i];
      if(j == n || s[j] != lo && s[j]!= up)
      {
          cout << "NO" << '\n';
          return;
      }
      while(j < n && (s[j] == lo || s[j] == up))
      {
          j++;
      }
    }
  cout << (j == n ? "YES" : "NO") << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;cin >> t ;
    while (t--) magic();
}

#include <bits/stdc++.h>
using namespace std;
const int M = int(2e5) + 10;

signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   vector<int> ops(M);
   for (int i = 0; i < M; i++) {
    ops[i] ={};
    int x = i;
    while (x > 0) {
      ops[i] += 1;
      x /= 3;
    }
  }
   vector<int> pref(M + 1);
   for (int i = 0; i < M; i++) {
    pref[i + 1] = pref[i] + ops[i];
  }
    int tc = 1 ;
    cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
       int l , r ;
       cin >> l >> r ;
        int ans = pref[r + 1] - pref[l];
         ans += ops[l];
        cout << ans << '\n';
    }
   
}
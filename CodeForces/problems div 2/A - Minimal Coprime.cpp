
// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif
#define int long long

void magic() {

     int a , b ; cin >> a >> b ;
     if(a == 1 && b == 1) cout << 1 << '\n';
     else cout << abs(a - b) << '\n';

}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

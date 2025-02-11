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
    int t ; cin >> t ;
    vector<string> a(t);
    for (int i = 0; i < t; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << a[i].substr(0, a[i].size() - 2) + "i" << '\n';
    }

}
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tt = 1; //cin >> t;
    while (tt--) magic();
}

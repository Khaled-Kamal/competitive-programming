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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int j = 0; j < m; j++){
        cin >> b[j];
    }
    sort(b.begin(), b.end());
    
    const int INF = 1LL << 60; // A large number (~1e18)
    int curr = -(1LL << 60);
    bool possible = true;

    for (int i = 0; i < n; i++){
        int cand1 = INF;
        if(a[i] >= curr)
            cand1 = a[i];

      
        int target = curr + a[i];
        int cand2 = INF;
        auto it = lower_bound(b.begin(), b.end(), target);
        if(it != b.end()){
            cand2 = (*it) - a[i];
        }

       int  chosen = min(cand1, cand2);
        if(chosen == INF){
            possible = false;
            break;
        }
        curr = chosen;
    }
    cout << (possible ? "YES" : "NO") << "\n";
}
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tt = 1; cin >> tt;
    while (tt--) magic();
}

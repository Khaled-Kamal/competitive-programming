
// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif
#define int long long
vector<vector<int>> adj;

void magic() {
    int n; cin >> n;

    adj.assign(n + 1, {});
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    multiset<int> st;
    for(int i = 1; i <= n; ++i) st.insert(adj[i].size());

    int mx = 0;
    for(int u = 1; u <= n; ++u) {
        st.extract(adj[u].size());
        int me = adj[u].size();
        for(int &v: adj[u]) {
            st.extract(adj[v].size());
            st.insert(adj[v].size() - 1);
        }

        mx = max(mx, me + *st.rbegin() - 1);
        for(int &v: adj[u]) {
            st.extract(adj[v].size() - 1);
            st.insert(adj[v].size());
        }
        st.insert(adj[u].size());
    }

    cout << mx << '\n';

}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t ;
    while (t--) magic();
}

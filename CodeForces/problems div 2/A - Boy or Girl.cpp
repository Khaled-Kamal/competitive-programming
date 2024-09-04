#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s ;
    cin >> s ;
    set<char> st;
    for(char c : s)
    {
        st.insert(c);
    }

    if(st.size()%2==0)
    {
        cout << "CHAT WITH HER!" << '\n';
    }
    else
    {
        cout << "IGNORE HIM!" ;
    }


//    int tc;
//   // cin >> tc;
//    while (tc--) {
//        solve();
//    }

    return 0;
}

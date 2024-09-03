#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    set<char> st;
    int cnt{};
    for(char c : s)
    {
        if(st.find(c)==st.end())
        {
            cnt+=2;
            st.insert(c);
        }
        else
        {
            cnt+=1;
        }
    }
    cout << cnt << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
  cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();

    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    if(n <26)
    {
        cout << "NO" ;
        return;
    }

    set<char> st ;
    for(char c : s)
    {
        st.insert(tolower(c));
    }

    if(st.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      int t = 1 ;
   //   cin >> t ;
      while(t--)
      {
          solve();
      }
    return 0;
}

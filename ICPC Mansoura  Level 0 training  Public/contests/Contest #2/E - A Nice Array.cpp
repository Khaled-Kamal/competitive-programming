#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n ;
   cin >> n ;
   set<int> st ;
   for (size_t i = 0; i < n; i++)
   {
      int t ;
      cin >> t ;
      st.insert(t);
   }
   cout <<(st.size() == n ? "YES" : "NO") << '\n';
   

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        solve();
      //  cout << '\n';
    }
}

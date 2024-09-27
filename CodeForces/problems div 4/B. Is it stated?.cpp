#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      int t = 1 ;
      cin >> t ;
      while(t--)
      {
          string s ;
          cin >> s ;
         auto f =s.find("it");
          cout << (f!=string::npos ? "YES" : "NO") << '\n';
      }

}

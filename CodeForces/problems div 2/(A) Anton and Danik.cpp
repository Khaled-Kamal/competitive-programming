#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

     int n ;
     string s ;
     cin >> n >> s;
     int a{} ,d{};
     for (int i = 0; i <s.size() ; ++i) {
        if(s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

     if(a > d)
     {
         cout << "Anton" ;
     }
     else if(a < d)
     {
         cout << "Danik" ;
     }
     else
     {
         cout << "Friendship";
     }

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
   // cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();

    }

    return 0;
}

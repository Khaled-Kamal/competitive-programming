#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            a+= 1;
        } else {
            if (i == 0 || s[i - 1] != '0') {
                b += 1;
            }
        }
    }
    cout << (a> b ? "Yes" : "No") ;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     int t = 1 ;
     cin >> t ;
     while(t--)
     {
         solve();
         cout << '\n';
     }


    return 0;
}

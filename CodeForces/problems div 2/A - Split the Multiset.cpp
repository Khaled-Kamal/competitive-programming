#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){

    int n, k;
    cin >> n >> k;
    int ans = (n - 1 + k - 2) / (k - 1) ;
    cout <<  ans ;
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

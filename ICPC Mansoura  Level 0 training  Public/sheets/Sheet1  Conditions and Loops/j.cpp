#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

     int a , b , c ;
     cin >> a >> b >> c ;

     int arr[] = {a , b , c};
     sort(arr,arr+3);

     a = arr[0];
     b = arr[1];
     c = arr[2];

     if(a + b > c)
     {
         cout << 0 << '\n';
     }
     else
     {
         cout << (c - (a + b) + 1) << '\n';
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
        cout << '\n';
    }

    return 0;
}

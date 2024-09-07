#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {


    int n , m ;
    cin >> n >> m ;
    vector<int> v(n);
    vector<int> freq(m + 1 , 0);
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];
        freq[v[i]]++;
    }
    for (int i = 1; i <m + 1 ; ++i) {

        cout << freq[i] << '\n';

    }

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
  //  cin >> tc ;
    for (int i = 1; i <=tc ; ++i) {
        solve();
        cout << '\n';
    }

    return 1 - 1 ;
  
}
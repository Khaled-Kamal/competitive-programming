#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n ;
    cin >> n;
    vector<int> v(n);
    vector<int> freq(n + 1 , 0);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }

   int ans = -1 ;
    for (int i = 0; i <n+1 ; ++i) {
        if(freq[i] >= 3)
        {
            ans = i ;
            break;
        }
    }
    cout << ans << '\n';

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
    cin >> tc ;
    for (int i = 1; i <=tc ; ++i) {
        solve();

    }

    return 1 - 1 ;

}
 
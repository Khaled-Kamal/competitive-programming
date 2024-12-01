#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    int mx = *max_element(s.begin() ,s.end()) - 'a' + 1 ;

    cout << (int)(mx);

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ; cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
        cout << '\n';
    }
    return (0 - 0);

}

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

    int n ;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

    int st = 0 , r = n - 1 ;
    while(st <= r)
    {
        cout << a[st++] << " " ;
        if(st <= r)
        {
            cout << a[r--] << ' ' ;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
//    cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }
    return (0 - 0);

}
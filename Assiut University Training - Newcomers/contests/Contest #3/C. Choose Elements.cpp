#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

     int n ;
     cin >> n ;
     int k ; cin >>  k;
     vector<int> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }

   sort(a.rbegin() , a.rend());
    int ans = 0 ;
    for (int i = 0; i < k ; ++i) {
        if(a[i] < 0)
        {
            break;
        }
        ans+=a[i];
    }
    cout << ans << '\n';
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
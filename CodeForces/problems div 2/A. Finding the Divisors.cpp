#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {

    int a , b ;
    cin >> a >> b ;

    int mx = 0 , ans = 0 ;

    for (int i = min(a , b); i <=max(a , b) ; ++i) {
        int div = 0 ;
        for (int j = 1; j <=i ; ++j) {
            if(i % j == 0)
            {
                div++;
            }
        }

        if(div > mx)
        {
            mx = div;
            ans = i ;
        }
    }
    cout << ans ;

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
  //   cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
        cout << '\n';
    }
    return (0 - 0);

}

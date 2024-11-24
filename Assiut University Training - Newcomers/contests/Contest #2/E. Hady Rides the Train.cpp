#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double


void solve() {

    int n ;
    cin >> n ;

    int row = n / 4 ;
    int col ;
    if(row % 2 == 0)
    {
         col = n % 4 ;
    }
    else
    {
        col = 3 - (n % 4) ;
    }

    cout << row << ' ' << col ;
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
    }
    return (0 - 0);

}
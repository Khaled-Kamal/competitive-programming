#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

   int n ;
   cin >> n ;
   vector<int> a(n) , b(n);
    for (int i = 0; i <n ; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i <n ; ++i) {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans  = 0;
    int i = 0 ;
    for (int j = 0; j <n ; ++j) {
        if(a[i] > b[j])
        {
            ans++;
        }
        else
        {
            i++;
        }
    }
    cout << ans << '\n' ;

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
    cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }

}

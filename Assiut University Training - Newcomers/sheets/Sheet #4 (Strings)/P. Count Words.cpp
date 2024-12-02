#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

bool is_can(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z');

}
void solve() {
     string s ;
    getline(cin , s);
    int cnt = 0 ;
    bool dp = false;
    for(char &c : s)
    {
        if(is_can(c))
        {
            if(!dp)
            {
                cnt++;
                dp = true;
            }
        }
        else
        {
            dp = false;
        }
    }

    cout << cnt ;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ; //cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
        cout << '\n';
    }
    return (0 - 0);

}
